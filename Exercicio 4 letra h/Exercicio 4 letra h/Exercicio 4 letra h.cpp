//Exercicio 4 letra h.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a fórmula
//VOLUME <- COMPRIMENTO * LARGURA * ALTURA

#include <iostream>

int main()
{
    float COMPRIMENTO, LARGURA, ALTURA, VOLUME;
    std::cout << "\nInforme o comprimento: ";
    std::cin >> COMPRIMENTO;
    std::cout << "\nInforme a largura: ";
    std::cin >> LARGURA;
    std::cout << "\nInforme a altura: ";
    std::cin >> ALTURA;

    VOLUME = COMPRIMENTO * LARGURA * ALTURA;

    std::cout << "\nVOLUME = " << VOLUME << "\n\n";
}