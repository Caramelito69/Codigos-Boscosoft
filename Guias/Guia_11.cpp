//Exponenciacion Rapida
// Teniendo en cuenta que el metodo iterativo es mas eficiente en tiempo y memoria que el
// recursivo, sera mas aconsejable usar el iterativo por lo tanto:
ll pou(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b)
    {
        if (b&1) ans *= a,ans%=m;
        a*=a,a%=m,b/=2;
    }
    return ans;
}
// Este algoritmo va unicamente hasta la raiz de n y de dos en dos para evitar los pares.
bool isPrime(long long n) {
 if (n <= 1) return false;
 if (n <= 3) return true;
 if (n % 2 == 0) return false;
 for (ll i = 5; i*i <= n; i += 2){
  if (n % i == 0) return false;
 }
 return true;
}
// Función para calcular (a^b) % mod de forma eficiente (exponenciación modular)
long long mod_pow(long long a, long long b, long long mod) {
    long long res = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1)  // Si b es impar
            res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}
// Test de Fermat: devuelve true si n es probablemente primo
bool is_prime_fermat(int n, int iter = 5) {
    if (n <= 4) return (n == 2 || n == 3);

    srand(time(0));  // Inicializa la semilla para aleatoriedad
    for (int i = 0; i < iter; i++)
    {
        int a = 2 + rand() % (n - 3);
        if (pou(a, n - 1, n) != 1)
            return false;  // Compuesto
    }
    return true;  // Probablemente primo
}
