//Exercicio 4 letra o.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra o. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Elaborar um programa que leia quatro valores numérico inteiros (variáveis A, B, C e D).
//Ao final, o programa deve apresentar o resultado, armazenado em memória, do produto (variável P) do primeiro com o terceiro valor, 
//e o resultado da soma (variável S) do segundo com o quarto valor.

#include <iostream>

int main()
{
    int A, B, C, D, P, S;
    std::cout << "Primeiro valor: ";
    std::cin >> A;
    std::cout << "\nSegundo valor: ";
    std::cin >> B;
    std::cout << "\nTerceiro valor: ";
    std::cin >> C;
    std::cout << "\nQuarto valor: ";
    std::cin >> D;
    P = A + C;
    S = B + D;

    std::cout << "\nA soma do primeiro valor + o terceiro = " << P;
    std::cout << "\nA soma do segundo valor + o quarto = " << S << "\n\n";
}