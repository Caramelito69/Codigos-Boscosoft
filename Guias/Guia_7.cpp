//Policy Based Data Structures(PBDS)
//Es una extensión de la biblioteca estándar de C++\
//que ofrece estructuras de datos adicionales con funcionalidades avanzadas que no están disponibles en la biblioteca estándar.
//Estas estructuras de datos están implementadas utilizando la biblioteca de __gnu_pbds,
//y proporcionan características como operaciones de búsqueda, inserción, y eliminación eficientes, 
//junto con otras funcionalidades como encontrar el k-ésimo elemento, y contar la cantidad de elementos menores que un valor dado.

//Funciones Clave:
//  order_of_key(k): Retorna la cantidad de elementos en el conjunto que son menores que k.
//  find_by_order(k): Retorna un iterador al k-ésimo elemento en el conjunto (empezando desde 0).

//Tipos Comunes de PBDS:
//  tree: Proporciona operaciones de orden estadístico en un árbol equilibrado como un árbol rojo-negro.
//  hash: Proporciona operaciones rápidas de búsqueda y almacenamiento basadas en tablas hash.

//Ejemplo:
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
void solve()
{
    ordered_set a;
    int n,c;cin>>n;
    fore(i,1,n)
    {
        cin>>c;
        a.insert(c);
    }
    for(auto elem:a)
        cout<<elem<<" ";
    cout<<endl;
    cout<<(a.order_of_key(3));
}
signed main()
{
    INI solve();
}