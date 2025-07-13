//Recapitulando todo lo que vimos con respecto a Programacion Dinamica
//Ahora nos enfocaremos en el uso de Mapas
//Recordemos que un mapa es una estructura de datos que almacena pares clave-valo,
//Permitiendo una asociacion directa entre cada clavey su correspondiente valor.
//Al final nos proporciona una forma eficiente de almacenar,buscar,insertar y eliminar pares clave-valor.
//1. Insercion de Elementos
// Inserción de un par clave-valor
{
    map<int, int> mp;
    mp.insert({key, value});
}
//2. Acceso a Elementos
{
    // Acceso a un valor mediante su clave
    int value = mp[key];
}
//3. Busqueda de una clave
{
    auto it = mp.find(key);
    if (it != mp.end())
    {
        // La clave existe
        int value = it->second;
    }    
}
//4. Eliminacion de Elementos
{
    // Eliminación de una clave
    mp.erase(key);
}
//5.Recorrer todos los elementos
{
    for (const auto &pair : mp)
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
}
//Bonus: Contador de Frecuencias (Patrón Común)
{
    unordered_map<int, int> freq;
    vector<int> arr = {1, 2, 2, 3, 3, 3};

    for (int num : arr)
        freq[num]++;

    for (const auto &pair : freq)
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
}

//Algoritmo Segment-Tree(Arbol de Segmentos)
//El Segment Tree es una estructura de datos poderosa,
//Utilizada para realizar consultas y actualizaciones de intervalos en tiempo logarítmico.
//Utilidad en Competencias de Programación:
//  -Consultas de Rango: Permite resolver problemas que requieren consultar información en intervalos de manera eficiente.
//  -Actualizaciones Dinámicas: Facilita la actualización de elementos y recalcular información de intervalos rápidamente.
struct Segment_tree{
    vector<int>arbol;
    int n;
    void construir(vector<int>& vec,int nodo,int inicio,int fin)
    {
            if(inicio==fin)
                arbol[nodo]=vec[inicio];
            else
            {
                int medio=(inicio+fin)/2;
                construir(vec,2*nodo+1,inicio,medio);
                construir(vec,2*nodo+2,medio+1,fin);
                arbol[nodo]=arbol[2*nodo+1]+arbol[2*nodo+2];
            }
    }
    int query(int nodo,int inicio,int fin,int l,int r)
    {
        if(r<inicio || l>fin) return 0;
        if(l<=inicio && fin<=r) return arbol[nodo];
        int medio =(inicio+fin)/2;
        int left=query(2*nodo+1,inicio,medio,l,r);
        int right=query(2*nodo+2,medio+1,fin,l,r);
        return left+right;
    }
    void update(int nodo,int inicio,int fin,int idx,int valor)
    {
        if(inicio==fin) arbol[nodo]=valor;
        else
        {
            int medio=(inicio+fin)/2;
            if(idx<=medio) update(2*nodo+1,inicio,medio,idx,valor);
            else update(2*nodo+2,medio+1,fin,idx,valor);
            arbol[nodo]=arbol[2*nodo+1]+arbol[2*nodo+2];
        }
    }
    Segment_tree(vector<int>& vec)
    {
        n=vec.size();
        arbol.assign(4*n,0);
        construir(vec,0,0,n-1);
    }
     int query(int l,int r){return query(0,0,n-1,l,r);}
     void update(int idx,int valor){update(0,0,n-1,idx,valor);}
};