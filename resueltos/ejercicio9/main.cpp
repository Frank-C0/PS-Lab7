// Ejercicio 09
// Utilizar excepciones, en un programa en C++,
// para tratar el error de crear un arreglo de cien millones
// de enteros con un throw implícito

#include <iostream>

using namespace std;

int main()
{
    int *x;
    int y = 1000000000;
    try
    {
        x = new int[y];
        x[0] = 10;
        cout << "Puntero: " << (void *)x << endl;
        delete[] x;
    }
    catch (std::bad_alloc &)
    {
        cout << "Memoria insuficiente" << endl;
    }
    return 0;
}