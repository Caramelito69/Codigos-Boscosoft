#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

// Variables globales para simular el comportamiento del juez
vector<long long> actual_prices;
vector<long long> souvenirs_bought;

// Función transaction simulada para pruebas locales
pair<vector<int>, long long> transaction(long long M) {
    // Verificar restricciones
    if (M >= actual_prices[0]) {
        cerr << "Error: M >= P[0]" << endl;
        return make_pair(vector<int>(), 0LL);
    }

    vector<int> bought;
    long long remaining = M;

    // Simular el proceso de compra
    for (int i = 0; i < actual_prices.size(); i++) {
        if (remaining >= actual_prices[i]) {
            remaining -= actual_prices[i];
            bought.push_back(i);
            souvenirs_bought[i]++;
        }
    }

    // Verificar que se compró al menos un souvenir
    if (bought.empty()) {
        cerr << "Error: No souvenirs bought" << endl;
    }

    return make_pair(bought, remaining);
}

// Implementación de la solución
void buy_souvenirs(int N, long long P0) {
    vector<long long> P(N);
    P[0] = P0;
    map<long long, pair<vector<int>, long long>> cache;

    // Paso 1: Descubrir todos los precios P[1] a P[N-1]
    for (int i = 1; i < N; i++) {
        long long low = 1;
        long long high = P[i-1] - 1;
        long long ans = high + 1;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            pair<vector<int>, long long> res;

            if (cache.find(mid) != cache.end()) {
                res = cache[mid];
            } else {
                res = transaction(mid);
                cache[mid] = res;
            }

            bool found = false;
            for (int type : res.first) {
                if (type == i) {
                    found = true;
                    break;
                }
            }

            if (found) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        P[i] = ans;
    }

    // Paso 2: Comprar exactamente i souvenirs de tipo i para i=1..N-1
    vector<int> required(N, 0);
    for (int i = 1; i < N; i++) {
        required[i] = i;
    }

    // Comprar souvenirs de manera eficiente
    while (true) {
        bool all_done = true;
        for (int i = 1; i < N; i++) {
            if (required[i] > 0) {
                all_done = false;
                break;
            }
        }
        if (all_done) break;

        // Intentar agrupar múltiples compras en una transacción
        long long M = 0;
        vector<int> current_buy;

        for (int i = 1; i < N; i++) {
            while (required[i] > 0 && M + P[i] < P[0]) {
                current_buy.push_back(i);
                M += P[i];
                required[i]--;
            }
        }

        if (current_buy.empty()) {
            // Si no se puede agrupar, comprar el tipo más barato disponible
            for (int i = N-1; i >= 1; i--) {
                if (required[i] > 0) {
                    transaction(P[i]);
                    required[i]--;
                    break;
                }
            }
        } else {
            transaction(M);
        }
    }
}

int main() {
    int N;
    cin >> N;

    actual_prices.resize(N);
    souvenirs_bought.resize(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> actual_prices[i];
    }

    // Verificar que los precios están en orden decreciente
    for (int i = 0; i < N-1; i++) {
        if (actual_prices[i] <= actual_prices[i+1]) {
            cerr << "Error: Los precios no están en orden decreciente" << endl;
            return 1;
        }
    }

    // Llamar a la función principal
    buy_souvenirs(N, actual_prices[0]);

    // Imprimir resultados
    for (int i = 0; i < N; i++) {
        cout << souvenirs_bought[i];
        if (i < N-1) cout << " ";
    }
    cout << endl;

    return 0;
}
