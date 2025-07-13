//Funcion __builtin_popcount
//Esta funcion cuenta el número de bits encendidos (1s) en un entero.
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int x = 29; // Binario: 11101
    cout << "Número de bits encendidos en " << x << ": " << __builtin_popcount(x) << "\n";
}

//Funcion __builtin_ctz
//Ayuda a obtener el indice del bit mas bajo encendido(empezando desde 0 las posiciones).
#include <iostream>
using namespace std;
int main() {
    int x = 18; // Binario: 10010
    cout << "Bit más bajo encendido en " << x << ": " << __builtin_ctz(x) << "\n";
}
//Funcion __builtin_ctz(Obtener el indice del bit mas alto)
//Ayuda a obtener el indice del bit mas alto encendido(empezando desde 0 las posiciones).
#include <iostream>
using namespace std;
int main() {
    int x = 18; // Binario: 10010
    cout << "Bit más alto encendido en " << x << ": " << (31 - __builtin_clz(x)) << "\n";
}

//Funcion para Verificar si un numero es potencia de 2
//Recordemos que un número es potencia de 2 si tiene solo un bit encendido,
//la operación x&(x−1) elimina el bit menos significativo encendido.
bool isPowerOfTwo(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}
int main() {
    int x = 16;
    cout << x << " es potencia de 2: " << (isPowerOfTwo(x) ? "Sí" : "No") << "\n";
}

//Funcion para invertir un numero
//El operador de negacion "~" nos ayudara a invertir un numero entero.
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    unsigned int x = 25; // Binario: 000...11001
    unsigned int result = ~x;
    cout << "Invertir bits de " << x << ": " << std::bitset<32>(result) << "\n";
}

//Funcion para establecer un bit especifico
//La operación x∣=(1≪pos) establece el bit en una posición específica.
#include <iostream>
using namespace std;
int main() {
    int x = 5; // Binario: 101
    int bit_position = 1; // Posición del bit a establecer
    x |= (1 << bit_position);
    cout << "Establecer el bit " << bit_position << ": " << x << "\n"; // Binario: 111
}

//Funcion limpiar(apagar) un bit especifico
//La operación x&=∼(1≪pos) apaga el bit en una posición específica.
#include <iostream>
using namespace std;
int main() {
    int x = 5; // Binario: 101
    int bit_position = 2; // Posición del bit a limpiar
    x &= ~(1 << bit_position);
    cout << "Limpiar el bit " << bit_position << ": " << x << "\n"; // Binario: 001
}

//Funcion invertir un bit especifico
//La operación x^=(1≪pos) invierte el estado del bit en una posición específica.
#include <iostream>
using namespace std;
int main() {
    int x = 5; // Binario: 101
    int bit_position = 1; // Posición del bit a alternar
    x ^= (1 << bit_position);
    cout << "Alternar el bit " << bit_position << ": " << x << "\n"; // Binario: 111
}
//Funcion contar el numero de bits en un rango especifico
//Crea una máscara para aislar los bits en un rango y utiliza __builtin_popcount para contarlos.
#include <iostream>
using namespace std;
int countBitsInRange(int x, int L, int R) {
    int mask = ((1 << (R - L + 1)) - 1) << L;
    return __builtin_popcount(x & mask);
}
int main() {
    int x = 29; // Binario: 11101
    cout << "Bits encendidos entre 1 y 3: " << countBitsInRange(x, 1, 3) << "\n";
}

//Funcion encontrar numero mas cercano
//Ayudara a encontrar el número más cercano con el mismo número de bits encendidos.
#include <iostream>
using namespace std;
int nextSameBitCount(int x) {
    int c = x & -x;
    int r = x + c;
    return (((r ^ x) >> 2) / c) | r;
}
int main() {
    int x = 6; // Binario: 110
    cout << "Siguiente número con el mismo número de bits encendidos: " << nextSameBitCount(x) << "\n";
}
