// b) Excepciones por tipos de datos incorrectos
// (ejemplo, al solicitar un dato numérico el usuario digita letras).

#include <iostream>
#include <regex>
#include <string>

class IsNotAIntegerNumberException : public std::exception
{
public:
    const char *what()
    {
        return "El valor no es un numero Entero (int)";
    }
};
class IsNotADoubleNumberException : public std::exception
{
public:
    const char *what()
    {
        return "El valor no es un numero Decimal (double)";
    }
};
class ScannerTerminal
{

    std::istream &reader;

public:
    ScannerTerminal(std::istream &in) : reader{in} {};
    std::string readLine()
    {
        std::string entrada;
        std::cin >> entrada;
        return entrada;
    }
    int readInt()
    {
        std::string entrada = this->readLine();
        std::regex integer_regex("^(0|[+-]?[1-9][0-9]*)$");
        if (!std::regex_match(entrada, integer_regex))
        {
            throw IsNotAIntegerNumberException();
        }
        int i = std::stoi(entrada);
        std::cout << "\tNumero : " << i << '\n';
        return i;
    }
    double readDouble()
    {
        std::string entrada = this->readLine();
        std::regex integer_regex("^([+-]?[0-9]+(.[0-9]+)?)");
        if (!std::regex_match(entrada, integer_regex))
        {
            throw IsNotADoubleNumberException();
        }
        double d = std::stod(entrada);
        std::cout << "\tNumero : " << d << '\n';
        return d;
    }
};

int main()
{
    ScannerTerminal scan(std::cin);
    int i = 1;
    do
    {
        std::cout << "Ingrese un numero entero (int): ";
        try
        {
            i = scan.readInt();
        }
        catch (IsNotAIntegerNumberException e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "formato no valido para un numero Entero (int)\n";
        }
    } while (i != 0);

    double d = 1;
    do
    {
        std::cout << "Ingrese un numero decimal (double): ";
        try
        {
            d = scan.readDouble();
        }
        catch (IsNotADoubleNumberException e)
        {
            std::cerr << e.what() << '\n';
        std::cout << "formato no valido para un numero Decimal (float)\n";
        }
    } while (d != 0);
}