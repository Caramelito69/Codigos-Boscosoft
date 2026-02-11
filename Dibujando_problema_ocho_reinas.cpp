#include <bits/stdc++.h>
#define INi cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
using namespace std;
int solucion_nro = 0;
int reinas[20]; // Guarda la columna ocupada en cada fila

/**
 * Imprime el tablero en formato de matriz NxN
 */
void imprimirTablero(int n)
{
    solucion_nro++;
    cout << "--- SOLUCION #" << solucion_nro << " ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (reinas[i] == j)
                cout << " Q "; // Reina
            else
                cout << " . "; // Espacio vacío
        }
        cout << endl;
    }
    cout << endl;
}

/**
 * Algoritmo de Backtracking con Bitmasks
 */
void solve(int row, int cols, int d1, int d2, int full_mask, int n) {
    // Caso base: se colocaron reinas en todas las filas
    if (cols == full_mask) {
        imprimirTablero(n);
        return;
    }

    // Calculamos posiciones seguras

    int safe_positions = full_mask & ~(cols | d1 | d2);
    while (safe_positions > 0) {
        // Extraer el bit más a la derecha
        int p = safe_positions & -safe_positions;

        // Guardar la posición de la columna para imprimirla después
        // __builtin_ctz cuenta ceros a la derecha, dándonos el índice del bit
        reinas[row] = __builtin_ctz(p);

        safe_positions -= p;

        // Llamada recursiva con desplazamiento de diagonales
        solve(row + 1, cols | p, (d1 | p) << 1, (d2 | p) >> 1, full_mask, n);
    }
}

int main() {
    int n;
    cout << "Introduce N (ej. 8): ";
    cin >> n;

    if (n < 1 || n > 15) {
        cout << "Por favor, introduce un numero entre 1 y 15." << endl;
        return 0;
    }

    int full_mask = (1 << n) - 1;
    solve(0, 0, 0, 0, full_mask, n);

    cout << "Total de soluciones encontradas: " << solucion_nro << endl;

    return 0;
}
