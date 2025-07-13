//Implementacion de PBDS
//Aqui nos ayudara a saber cuantos numeros se conforman en cierto rango,
//En donde tambien podemos ir actualizando los datos y solamente haciendo uso de "UNA" sola funcion podremos ir consultando datos.
#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void solve()
{
    int n, q, a, b;
    char ch;
    cin >> n >> q;
    ordered_set s;
    int arr[n];
    for(int i=1;i<=n;i++) {
        cin >> arr[i];
        s.insert({arr[i], i});
    }
    while(q--) {
        cin >> ch >> a >> b;
        if(ch == '?') {
            int n1 = s.order_of_key({a-1, n});
            int n2 = s.order_of_key({b, n});
            cout << n2-n1 << "\n";
        } else {
            s.erase({arr[a], a});
            arr[a] = b;
            s.insert({arr[a], a});
        }
    }
}
signed main()
{
    solve();
}
