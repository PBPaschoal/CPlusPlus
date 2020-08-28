//Exercicio 4 letra j.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra j. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado armazenado em memória do quadrado da  
//diferença do primeiro valor (variável A) em relação ao segundo valor (variável B). 

#include <iostream>

int main()
{
    int A, B, DIF;
    std::cout << "\nDigite o primeiro valor: ";
    std::cin >> A;
    std::cout << "\nDigite o segundo valor: ";
    std::cin >> B;

    DIF = A - B;

    std::cout << "\nDiferenca = " << DIF <<"\n\n";
}
