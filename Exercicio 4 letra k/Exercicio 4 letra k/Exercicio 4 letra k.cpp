//Exercicio 4 letra k.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra k. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar (US$).
//O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponivel com o usuário e armazenar em memória
//o valor da conversão antes da apresentação.

#include <iostream>

int main()
{
    float cotacao_dolar, moeda_dolar, moeda_real;

    std::cout << "Valor da cotacao do dolar R$ ";
    std::cin >> cotacao_dolar;
    std::cout << "Informe o valor em dolar US$ ";
    std::cin >> moeda_dolar;
    moeda_real = cotacao_dolar * moeda_dolar;

    std::cout << "Valor em real R$ " << moeda_real << "\n\n";


}