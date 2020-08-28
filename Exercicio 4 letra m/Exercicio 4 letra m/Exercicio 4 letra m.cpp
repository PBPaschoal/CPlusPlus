//Exercicio 4 letra m.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra m. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Construir um programa que leia três valores numéricos inteiros (representados pelas variáveis A, B e C) e apresentar como resultado final, 
//armazenado em memória, o valor da soma dos quadrados dos três valores lidos.

#include <iostream>

int main()
{
    int A, B, C, FINAL;

    std::cout << "Valor A: ";
    std::cin >> A;
    std::cout << "\nValor B: ";
    std::cin >> B;
    std::cout << "\nValor C: ";
    std::cin >> C;
    FINAL = A * A + B * B + C * C;
    std::cout << "\nValor da soma dos quadrados dos tres valores: " << FINAL << "\n\n";

}