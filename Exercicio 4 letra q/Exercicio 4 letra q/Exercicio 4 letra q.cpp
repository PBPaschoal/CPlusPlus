//Exercicio 4 letra q.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra q. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Elaborar um programa que calcule e apresente o valor resultado da área de uma circunferência (variável A).
//O programa deve solicitar a entrada do valor do raio da circunferência (variável R). Para a execução deste problema, utilize 
//a fórmula A <- 3.14159265*R^2.

#include <iostream>

int main()
{
    double R, A;
    std::cout << "Valor raio da circunferencia: ";
    std::cin >> R;
    A = 3.14159265 * (R * R);
    std::cout << "\nO valor da area = " << A << "\n\n";

}