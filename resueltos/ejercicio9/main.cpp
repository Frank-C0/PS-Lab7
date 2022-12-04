// Ejercicio 09
// Utilizar excepciones, en un programa en C++,
// para tratar el error de crear un arreglo de cien millones
// de enteros con un throw implícito

#include <iostream>

int main()
{
    double *x;
    long y = 1000000000000000;
    try
    {
        x = new double[y];
        std::cout << "Puntero de x: " << x << '\n';
        delete[] x;
    }
    catch (std::bad_alloc &)
    {
        std::cout << "Error: Memoria insuficiente" << '\n';
    }
    return 0;
}