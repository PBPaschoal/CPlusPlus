//Exercicio 4 letra p.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra p. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Elaborar um programa que leia o valor numérico correspondente ao salário mensal (variável SM) de um trabalhador e também fazer a 
//leitura do valor do percentual de reajuste (variável PR) a ser atribuído. Apresentar o valor do novo salário (variável NS) após o 
//armazenamento do cálculo em memória.

#include <iostream>

int main()
{
    int SM, PR, NS;
    std::cout << "Salario mensal: R$ ";
    std::cin >> SM;
    std::cout << "Percentual do reajuste: ";
    std::cin >> PR;
    NS = SM * PR / 100 + SM;
    std::cout << "Novo salario R$ " << NS << "\n\n";
}
