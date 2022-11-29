// Crear un programa en C++ que muestre como una función
// separada de la función principal puede
// enviar excepciones que serán capturadas en la función main,

#include <iostream>
using namespace std;
void fun(int *ptr, int x)
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Alguna funcionalidad */
}
int main()
{
    try
    {
        fun(NULL, 0);
    }
    catch (...) // por defecto
    {
        cout << "Capturando la excepcion desde fun()" << endl;
    }
    return 0;
}