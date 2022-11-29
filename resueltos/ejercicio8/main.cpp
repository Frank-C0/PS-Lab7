// Ejercicio 08
// Crear un programa en C++ que muestre que cuando 
// se lanza una excepción, todos los objetos
// creados dentro del bloque try adjunto se 
// destruyen antes de que el control se transfiera al bloque
// catch.
#include <iostream>
    using namespace std;
class Test
{

public:
    Test() { cout << "Constructor de la prueba " << endl; }
    ~Test() { cout << "Destructor de la prueba se destruye antes del catch? SI" << endl; }
};
int main()
{
    try
    {
        Test t1;
        throw 10;
    }
    catch (int i)
    {
        cout << "Capturado " << i << endl;
    }
}