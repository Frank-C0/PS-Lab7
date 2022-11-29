// Crear un programa en C++ mostrando como se termina
// una excepción si es que no se define un
// bloque catch para capturar una excepción, se lanza
// un carácter, pero solo se prepara para capturar un
// entero

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
        cout << "Capturado\n";
    }
    // catch (char x)
    // {
    //     cout << "Capturado\n";
    // }

    cout<<"se ejecuta despues? \n";

    return 0;
}