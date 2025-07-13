//Recordando siempre nuestra MACROS
#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//Funcion Lower_bound
//Busca el primer elemento en un rango ordenado que no es menor que un valor dado. 
//En otras palabras, devuelve un iterador que apunta al primer elemento que es mayor o igual al valor especificado.
//Si no se encuentra tal elemento, devuelve un iterador al final del rango.
void solve()
{
    vector<int> vec = {1, 2, 4, 4, 5, 6, 8};
    int value = 4;
    auto it = lower_bound(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        cout << "Lower bound de " << value << " es: " << *it << endl;
    } else {
        cout << "No se encontró un elemento mayor o igual a " << value << endl;
    }
}
//Funcion Upper_bound
//Busca el primer elemento en un rango ordenado que es estrictamente mayor que un valor dado.
//En otras palabras, devuelve un iterador que apunta al primer elemento que es mayor al valor especificado.
//Si no se encuentra tal elemento, devuelve un iterador al final del rango.
void solve()
{
    vector<int> vec = {1, 2, 4, 4, 5, 6, 8};
    int value = 4;
    auto it = upper_bound(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        cout << "Upper bound de " << value << " es: " << *it << endl;
    } else {
        cout << "No se encontró un elemento mayor a " << value << endl;
    }
}
//Funcion Find
//se utiliza para buscar la primera aparición de un valor específico dentro de un rango (como un vector, lista, array, etc.).
//Esta función pertenece a la biblioteca <algorithm>.
void solve()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    int value = 30;
    auto it = find(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        cout << "Elemento encontrado en la posición: " << distance(vec.begin(), it) << endl;
    } else {
        cout << "Elemento no encontrado" << endl;
    }
}
//Algoritmo de Union-Find
//Se basa en ir designando un padre por cada grafo
struct union_find{
    vector<int>padre;
    union_find(int a,int b)
    {
        padre.resize(b);
        fore(i,a,b)padre[i]=i;
    }
    int buscar(int n)
    {
        if(padre[n]!=n)
            padre[n]=buscar(padre[n]);
        return padre[n];
    }
    void unir(int a,int b)
    {
        int x=buscar(a);
        int y=buscar(b);
        if(x!=y)
            padre[x]=y;
    }
};