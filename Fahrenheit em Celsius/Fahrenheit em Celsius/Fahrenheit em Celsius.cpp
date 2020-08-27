// Fahrenheit em Celsius.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    double C, F;
    std::cout << "C <- ((F - 32 ) * 5) / 9\n";
    std::cout << "Informe o valor em Fahrenheit: ";
    std::cin >> F;
    C = ((F - 32) * 5) / 9;
    std::cout << C << " Celsius.\n";
    
}
