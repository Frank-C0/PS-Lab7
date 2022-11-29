#include <iostream>
using namespace std;

int main()
{
    try
    {
        char* c;
        char cc = 'd';
        throw cc;
        throw c;
        throw 10;
    }
    catch (char *excp)
    {
        cout << "Capturado " << excp;
    }
    catch (...)
    {
        cout << "Excepción por defecto\n";
    }
    return 0;
}