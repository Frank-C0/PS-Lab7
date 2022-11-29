// Ejercicio 06
// Crear un programa en C++ que muestre como se
// implementa completamente una función que maneja
// excepciones

#include <iostream>
using namespace std;
// Aqui se especifica la exception que la función
// envia
void fun(int *ptr, int x) throw(int *, int) // Especificación de la excepción dinámica
{ // warning: dynamic exception specifications are deprecated in C++11
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
    catch (...)
    {
        cout << "Capturando la excepción desde fun()" << endl;
    }
    return 0;
}