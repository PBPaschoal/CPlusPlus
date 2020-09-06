//Exercicio 4 letra w.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra w. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N.G.Manzano e Jayr Figueiredo de Oliveira
//Rio de Janeiro, dia 05 de setembro de 2020.
//Visual Studio 2019
//Elaborar um programa que leia uma medida em pés, calcular, armazenar e apresentar o seu valor convertido em metros, lembrando que um pé 
//mede 0,3048 metro, ou seja, um pé é igual a 30,48 centímetros.


#include <iostream>

int main()
{
    double PE, Metro;
    std::cout << "Informe o valor da medida em pes: ";
    std::cin >> PE;
    Metro = PE * 0.3048;

    std::cout << "Resultado: " << Metro << "Metro(s)\n\n";

}
