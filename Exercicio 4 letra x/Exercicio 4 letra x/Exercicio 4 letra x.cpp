//Exercicio 4 letra x.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra x. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Elaborar um programa que calcule e armazene uma raiz de base qualquer com indice qualquer.
//Rio de Janeiro, dia 07-09-2020 às 21:16hrs

#include <iostream>
#include <cmath>
int main()
{
    int N;
    std::cout << "Calcular a raiz quadrada de: ";
    std::cin >> N;
    std::cout << "Resultado = " << sqrt(N) << "\n\n";
}