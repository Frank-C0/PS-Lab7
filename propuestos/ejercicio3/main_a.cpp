// a) Excepciones provocadas por asignación 
// de memoria insuficiente (generadas por el operador new).

#include <iostream>

using namespace std;

int main()
{
    int *x;
    int y = 1000000000;
    try
    {
        x = new int[y]; // new array of integers
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