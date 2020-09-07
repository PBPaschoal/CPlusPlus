//Exercicio 4 letra e.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra e. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a fórmula
//PRESTAÇÃO <- VALOR + VALOR * (TAXA / 100) * TEMPO).
//Rio de Janeiro, Setembro 2020.

#include <iostream>

int main()
{
    float VALOR, TAXA, TEMPO, PRESTACAO;
    std::cout << "Valor: R$ ";
    std::cin >> VALOR;
    std::cout << "\nTaxa: ";
    std::cin >> TAXA;
    std::cout << "\nTempo: ";
    std::cin >> TEMPO;
    PRESTACAO = VALOR + (VALOR * (TAXA / 100) * TEMPO);
    std::cout << "\nPrestacao: R$ " << PRESTACAO << "\n\n";

}
