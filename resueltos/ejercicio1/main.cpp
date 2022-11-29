#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    // Algún código
    cout << "Antes del bloque try \n";
    try
    {
        cout << "Dentro del bloque try \n";
        if (x < 0)
        {
            throw x;
            cout << "Después de throw (Nunca ejecutado) \n";
        }
    }
    catch (int x)
    {
        cout << "Capturando la expcecion \n";
    }
    
    cout << "Después del catch (Será ejecutado) \n";
    return 0;
}