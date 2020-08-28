//Exercicio 4 letra f.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra e. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir
//o valor da variável B e a variável B passe a possuir o valor da variável A.
//Apresentar os valores após a efetivação do processamento da troca.

#include <iostream>

int main()
{
    int A, B, A2;
    std::cout << "Valor de A: ";
    std::cin >> A;
    std::cout << "\nValor de B: ";
    std::cin >> B;

    A2 = A;
    A = B;

    std::cout << "\nValor de A: " << A << "\n";
    std::cout << "Valor de B: " << A2 << "\n\n";
}
