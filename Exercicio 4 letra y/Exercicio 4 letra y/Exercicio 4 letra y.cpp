//Exercicio 4 letra y.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra y.Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Construir um programa que leia um valor numérico inteiro e apresente como resultado armazenado em memória os seus valores sucessor e antecessor.
//Rio de Janeiro, dia 07-09-2020 às 21:47hrs.

#include <iostream>

int main()
{
    int N, Suc, Ant;
    std::cout << "Informe o valor: ";
    std::cin >> N;
    Suc = N + 1;
    Ant = N - 1;
    std::cout << "Valor sucessor = " << Suc << " e valor antecessor = " << Ant << "\n\n";
}