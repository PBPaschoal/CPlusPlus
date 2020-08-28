//Exercicio 4 letra i.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra e. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao quadrado, sem efetuar o armazenamento 
//do resultado em memória.

#include <iostream>

int main()
{
    int N;
    std::cout << "Valor: ";
    std::cin >> N;
    
    std::cout << "\nValor " << N << " ao quadrado = " << N * N << "\n\n";
}