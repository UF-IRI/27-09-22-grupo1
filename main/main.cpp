#include <cstdlib>

#include "example.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    foobar::Example example{};
    cout << "Example.getValue() => " << example.getValue() << std::endl;
    cout << "hola mundo" << endl;
    float resultado = 0;
    resultado = suma(3, 5);
    cout << "el resultado es: " << resultado << endl;
    return EXIT_SUCCESS;
}