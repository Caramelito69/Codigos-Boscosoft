//Funcion Find
//usca la posición de la primera aparición de una subcadena en una cadena.
{
    string texto = "Hola, este es un ejemplo.";
    string palabra = "ejemplo";
    // Busca la posición de la palabra "ejemplo"
    size_t posicion = texto.find(palabra);
    if (posicion != string::npos)
        cout << "La palabra '" << palabra << "' se encontró en la posición: " << posicion << endl;
    else
        cout << "La palabra no se encontró." << endl;
}
//Funcion substr
//Extrae una subcadena a partir de un índice y longitud opcional.
{
    string texto = "Hola, mundo!";
    // Extrae "mundo" comenzando desde la posición 6 con longitud 5
    string subcadena = texto.substr(6, 5);
    cout << "Subcadena extraída: " << subcadena << endl;
}
//Funcion replace
//Reemplaza una parte de la cadena por otra.
{
     string texto = "Hola, Juan!";
    // Reemplaza "Juan" por "Misa"
    texto.replace(6, 4, "Misa");
    cout << "Cadena después del reemplazo: " << texto << endl;
}
//Funcion erase
//Elimina caracteres desde una posición específica.
{
    string texto = "Hola, mundo!";
    // Elimina "mundo!"
    texto.erase(6, 6);
    cout << "Texto después de borrar: " << texto << endl; 
}
//Funcion insert
//Inserta una subcadena en una posición específica.
{
    string texto = "Hola mundo!";
    // Inserta "hermoso " después de "Hola "
    texto.insert(5, "hermoso ");
    cout << "Texto después de insertar: " << texto << endl;
}
//Funcion compare
//Compara dos cadenas lexicográficamente.
{
    string texto1 = "Hola";
    string texto2 = "Mundo";
    if (texto1.compare(texto2) == 0)
        cout << "Las cadenas son iguales." << endl;
    else if (texto1.compare(texto2) < 0)
        cout << "Texto1 es menor que Texto2." << endl;
    else
        cout << "Texto1 es mayor que Texto2." << endl;
}
//Funcion transform
//Convierte una cadena a mayúsculas o minúsculas.
{
    string texto = "Hola Mundo!";
    // Convierte a mayúsculas
    transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
    cout << "Texto en mayúsculas: " << texto << endl;

    // Convierte a minúsculas
    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    cout << "Texto en minúsculas: " << texto << endl;
}
//Funcion find_first_of
//Encuentra el primer carácter de un conjunto en la cadena.
{
    string texto = "Hola, mundo!";
    string vocales = "aeiou";
    size_t posicion = texto.find_first_of(vocales);
    if (posicion != string::npos)
        cout << "La primera vocal está en la posición: " << posicion << endl;
    else
        cout << "No se encontraron vocales." << endl;
}
//Funcion find_last_of
//Encuentra el último carácter de un conjunto en la cadena.
{
    string texto = "Hola, mundo!";
    string vocales = "aeiou";

    size_t posicion = texto.find_last_of(vocales);
    if (posicion != string::npos)
        cout << "La última vocal está en la posición: " << posicion << endl;
    else
        cout << "No se encontraron vocales." << endl;
}
//Funcion stringstream
//Divide una cadena en partes.
{
    string texto = "9, 10, 15, 20";
    vector<int> numeros;
    stringstream ss(texto);
    string item;
    while (getline(ss, item, ','))
        numeros.push_back(stoi(item));

    cout << "Números: ";
    for (int num : numeros)
        cout << num << " ";
}