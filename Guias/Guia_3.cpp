#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//Funcion Convertir un numero a binario
//Una funcion externa la cual se basa en la estructura Bits
long long convertir_binario(int n)
{
    bitset<32> bs(n);
    long long binario = 0, acumulador = 1;
    for (int i = 0; i < bs.size(); i++)
    {
        if (bs[i]) binario += acumulador; // Solo suma si el bit está activo
        acumulador *= 10;
    }
    return binario;
}
//Funcion LSB
//Devuelve el valor del bit menos significativo que está encendido (1).
int findLSB(int n)
{
    return n & -n; // Devuelve el valor del LSB encendido.
    //Ejemplo: 18(10010) -> 2(10)
}
//Funcion Revertir
//Invierte el orden de los bits de un número entero de 32 bits
unsigned int reversaBits(unsigned int n)
{
    unsigned int result = 0;
    for (int i = 0; i < 32; i++)
    {
        result = (result << 1) | (n & 1);
        n >>= 1;
    }
    return result;
    //Ejemplo: 13(1101) -> 2952790016(10110000000000000000000000000000)
}
//Funcion para potencias de 2
//Determina si un número es una potencia de 2.
bool verpotenciados(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
    //Ejemplo: 8(1000) -> true(1)
}
//Funcion Paridad de un numero
//Verifica si el número tiene un número impar de bits en 1.
bool paridadBits(int n)
{
    return __builtin_parity(n);
    //Ejemplo: 13(1101) -> true(1)
}
//Funcion Rotar Bits a la izquierda
//Rota los bits hacia la izquierda d posiciones.
unsigned int rotaizquierda(unsigned int n, int d)
{
    return (n << d) | (n >> (32 - d));
    //Ejemplo: 13(1101),d=2  -> 52(110100)
}
//Funcion Rotar Bits a la derecha
//Rota los bits hacia la derecha d posiciones.
unsigned int rotarderecha(unsigned int n, int d)
{
    return (n >> d) | (n << (32 - d));
    //Ejemplo: 13(00000000000000000000000000001101),d=2   -> 1073741827(01000000000000000000000000000011)
}
//Funcion MSB
//Devuelve la posición del bit más significativo(Most Significant Bit) que está activado
int findMSB(int n)
{
    if (n == 0) return 0;
    return 31 - __builtin_clz(n);
    //Ejemplo 18(10010) -> 4(posición del MSB desde el bit menos significativo).
}
//Funcion para generar mascaras binarias de longitud (n)
//Genera todas las combinaciones posibles de bits para un número de longitud n.
vector<int> generadorMascaras(int n)
{
    vector<int> mascara;
    for (int i = 0; i < (1 << n); i++)
        mascara.push_back(i);
    return mascara;
    //Ejemplo: 3 -> [0, 1, 2, 3, 4, 5, 6, 7] (binarios: 000, 001, ..., 111).
}
//Funcion Hamming Distance
//Calcula el número de posiciones en las que los bits de dos números difieren
int DistanciaHamming(int x, int y)
{
    return __builtin_popcount(x ^ y);
    //Ejemplo: 13(binario: 1101) , 9 (binario: 1001)   -> 1
}
void solve()
{
    ll a,b;cin>>a>>b;cout<<rotarderecha(a,b);
}
signed main()
{
    INI solve();
}
