// Celsius em Fahrenheit.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    double C, F;
    std::cout << "F <- C * 9 / 5 + 32\n";
    std::cout << "Infome o valor de Celsius: ";
    std::cin >> C;
    F = C * 9 / 5 + 32;
    std::cout << F << " Fahrenheit\n";

}
