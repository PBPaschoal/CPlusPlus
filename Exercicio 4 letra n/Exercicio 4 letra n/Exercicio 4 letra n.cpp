//Exercicio 4 letra n.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra n. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Construir um programa que leia três valores numéricos inteiros (representados pelas variáveis A, B e C) e apresentar como resultado 
//final, armazenado em memória, o valor do quadrado da soma dos três valores lidos.

#include <iostream>

int main()
{
    int A, B, C, Quadrado, FINAL;

    std::cout << "Valor A: ";
    std::cin >> A;
    std::cout << "\nValor B: ";
    std::cin >> B;
    std::cout << "\nValor C: ";
    std::cin >> C;
    Quadrado = A + B + C;
    FINAL = Quadrado * Quadrado; //Eu entendi que é para ser ao quadrado o valor da soma, ou seja, primeiro somar e o resultado ao quadrado.
    //FINAL = A*A + B*B + C*C; porém também coloquei essa. Irei pesquisar pra ter certeza se fiz correto.
    std::cout << "\nValor do quadrado da soma dos três valores lidos: " << FINAL << "\n\n";

}