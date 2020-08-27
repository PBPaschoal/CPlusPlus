// Volume lata de Oleo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float altura, volume, R;
    std::cout << "Informe a altura: ";
    std::cin >> altura;
    std::cout << "Informe o valor de R: ";
    std::cin >> R;
    volume = 3.14159 * pow(R, 2) * altura;
    std::cout << "O valor do VOLUME = : " << volume <<"\n";

}
