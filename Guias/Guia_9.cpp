/* *
Depth-First Search (DFS)
DFS explora tan profundo como sea posible en un camino antes de retroceder.

Estrategia: Sigue un camino hasta llegar a un nodo sin hijos, luego retrocede y prueba otro camino.

Estructura usada: Pila (puede implementarse con recursión o una pila explícita).

Orden de recorrido: Va profundo primero antes de explorar otros caminos.

Consumo de memoria: Generalmente menos que BFS porque no almacena todos los nodos en memoria al mismo tiempo.

Uso común: Encontrar soluciones en problemas como Sudoku, análisis de conectividad en grafos, búsqueda en árboles.

🌍 Breadth-First Search (BFS)
BFS explora todos los nodos de un nivel antes de pasar al siguiente.

Estrategia: Explora primero todos los vecinos cercanos, luego expande hacia nodos más lejanos.

Estructura usada: Cola (FIFO).

Orden de recorrido: Explora los nodos por niveles desde la raíz.

Consumo de memoria: Puede ser alto porque mantiene en memoria todos los nodos de un nivel antes de pasar al siguiente.

Uso común: Encontrar la ruta más corta en un grafo, problemas como el camino más corto en un laberinto, búsqueda en redes.

🔥 Ejemplo Visual

Imagina un laberinto donde tienes que encontrar la salida:

DFS: Avanza profundo en una dirección, retrocede si encuentra un obstáculo y prueba otro camino.

BFS: Expande todas las opciones posibles cercanas antes de continuar con caminos más alejados.**/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grafo = {
    {1, 2},  // Nodo 0 conectado con 1 y 2
    {0, 3, 4},  // Nodo 1 conectado con 0, 3 y 4
    {0, 4},  // Nodo 2 conectado con 0 y 4
    {1},  // Nodo 3 conectado con 1
    {1, 2}  // Nodo 4 conectado con 1 y 2
};
// Función de DFS (búsqueda en profundidad)
void dfs(int nodo, vector<bool>& visitado) {
    visitado[nodo] = true;
    cout << nodo << " ";

    for (int vecino : grafo[nodo]) {
        if (!visitado[vecino]) {
            dfs(vecino, visitado);
        }
    }
}
// Función de BFS (búsqueda en anchura)
void bfs(int inicio) {
    vector<bool> visitado(grafo.size(), false);
    queue<int> q;

    visitado[inicio] = true;
    q.push(inicio);

    while (!q.empty()) {
        int nodo = q.front();
        q.pop();
        cout << nodo << " ";

        for (int vecino : grafo[nodo]) {
            if (!visitado[vecino]) {
                visitado[vecino] = true;
                q.push(vecino);
            }
        }
    }
}
signed main()
{
    vector<bool> visitado(grafo.size(), false);

    cout << "DFS: ";
    dfs(0, visitado);
    cout << "\n";

    cout << "BFS: ";
    bfs(0);
    cout << "\n";
}
