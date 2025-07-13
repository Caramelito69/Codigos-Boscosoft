//Apartir de ahora se implementara para cualquier tipo de problema de competencia el uso de 
//las siguientes MACROS
#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//Estructura de Dato "Vector"
//Contenedor dinámico que permite almacenar elementos de tamaño variable en un array, el cual
//permite acceso aleatorio rápido.
void solve()
{
    vector<int> vec = {1, 2, 3};
    vec.push_back(4); // Agregar un elemento
    vec[1] = 10;      // Modificar un elemento
    for (int x : vec)
        cout << x << " "; // Salida: 1 10 3 4
}
//Estructura de Dato "Set"
//Almacena elementos únicos en orden ascendente.
//Utiliza árboles balanceados (generalmente un Red-Black Tree).
void solve()
{
    set<int> s = {3, 1, 4};
    s.insert(2); // Agregar elemento

    for (int x : s)
        cout << x << " "; // Salida: 1 2 3 4

    cout << "\nExiste el 3? " << (s.count(3) ? "Sí" : "No"); // Salida: Sí
}
//Estructura de Dato "unordered_set"
//Almacena elementos únicos sin orden. Utiliza una tabla hash.
void solve()
{
    unordered_set<int> us = {3, 1, 4};
    us.insert(2);

    for (int x : us)
        cout << x << " "; // Orden arbitrario: 3 1 4 2

}
//Estructura de Dato "map"
//Almacena pares clave-valor ordenados por las claves. Similar a un diccionario.
void solve()
{
    map<string, int> m;
    m["Alice"] = 90;
    m["Bob"] = 80;

    for (auto [key, value] : m)
        cout << key << ": " << value << "\n"; // Salida: Alice: 90, Bob: 80

}
//Estructura de Dato "unordered_map"
//Almacena pares clave-valor sin orden. Utiliza una tabla hash.
void solve()
{
    unordered_map<string, int> um;
    um["Alice"] = 90;
    um["Bob"] = 80;

    for (auto [key, value] : um)
        cout << key << ": " << value << "\n"; // Orden arbitrario

}
//Estructura de Dato "deque"
//Contenedor dinámico que permite inserciones y eliminaciones eficientes en ambos extremos.
void solve()
{
    deque<int> dq = {1, 2, 3};
    dq.push_front(0);
    dq.push_back(4);

    for (int x : dq)
        cout << x << " "; // Salida: 0 1 2 3 4
}
//Estructura de Dato "priority_queue"
//Cola de prioridad donde el elemento más grande (por defecto) tiene mayor prioridad.
void solve()
{
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(4);

    while (!pq.empty()) {
        cout << pq.top() << " "; // Salida: 4 3 1
        pq.pop();
    }
}
//Estructura de Dato "stack"
//Estructura LIFO (último en entrar, primero en salir).
void solve()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    while (!st.empty()) {
        cout << st.top() << " "; // Salida: 3 2 1
        st.pop();
    }
}
//Estructura de Dato "queue"
//Estructura FIFO (primero en entrar, primero en salir).
void solve()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " "; // Salida: 1 2 3
        q.pop();
    }
}