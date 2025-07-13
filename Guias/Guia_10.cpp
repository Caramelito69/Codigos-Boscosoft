1️⃣ insert vs. emplace (set, map,unordered_map)
La diferencia clave es que emplace evita la creación de un objeto temporal.
main()
{
    set<int> s;
    s.insert(42);
    s.emplace(99);
    cout<<"Primer elemento: "<<*s.begin()<<endl;
}
Método	Eficiencia
insert:	Puede requerir una copia del objeto
emplace:	Construye el objeto directamente en la estructura

2️⃣ push_back vs. emplace_back (vector,deque)
emplace_back permite construir directamente dentro de la estructura.

#include <iostream>
#include <vector>
struct Persona {
    std::string nombre;
    int edad;
    Persona(std::string n, int e) : nombre(n), edad(e) {}
};
main()
{
    vector<Persona>v;
    v.push_back(Persona("Carlos", 25));  // Copia/mueve el objeto a `v`
    v.emplace_back("Ana", 30);           // Construcción directa en `v`
    cout<<"Primera persona: "<<v[0].nombre<<endl;
}

Método	Eficiencia
push_back	Puede generar una copia/movimiento del objeto
emplace_back	Construcción directa en el contenedor, evitando copias

3️⃣ insert vs. emplace_hint (std::map)
emplace_hint ayuda en inserciones eficientes cuando se conoce la posición adecuada.
main()
{
    map<int,string> m;
    m.insert({2, "Dos"});
    auto it = m.begin();
    m.emplace_hint(it, 1, "Uno");  // Sugerencia de posición para mejorar rendimiento
    cout<<"Primer elemento: "<<m.begin()->second<<endl;
}
Método	Eficiencia
insert:	Inserción estándar, puede hacer múltiples búsquedas
emplace_hint:	Sugerencia de posición previa mejora eficiencia en ciertos casos


4️⃣ erase vs. remove_if (vector)
remove_if mejora eficiencia eliminando elementos sin recorrer dos veces el contenedor.
main() {
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());
    cout<<"Elementos restantes: ";
    for (int n : v) std::cout << n << " ";
}
Método	Eficiencia
erase	Elimina elementos directamente, pero requiere búsqueda previa
remove_if	Marca elementos para eliminación y reduce desplazamientos innecesarios

5️⃣ swap vs. move (vector, string)
move transfiere la propiedad del objeto sin copiarlo.
#include <utility>
main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2;
    v2 = move(v1);  // Mueve `v1` a `v2`, evitando copias costosas
    cout << "Tamaño de v1: "<<v1.size()<<endl;
    cout << "Tamaño de v2: "<<v2.size()<<endl;
}
Método	Eficiencia
swap	Intercambia contenido de dos objetos, útil para permutaciones
move	Transfiere propiedad sin copias, optimizando rendimiento