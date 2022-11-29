// Crear un programa en C++ que muestre que no ocurre la conversión 
// de tipos usando las palabras
// reservadas de excepciones

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch (int x)
    {
        cout << "capturado " << x;
    }
    //catch (char c)
    //{
    //    cout << "capturado " << c;
    //}
    catch (...)
    {
        cout << "Excepción por defecto\n";
    }
    return 0;
}