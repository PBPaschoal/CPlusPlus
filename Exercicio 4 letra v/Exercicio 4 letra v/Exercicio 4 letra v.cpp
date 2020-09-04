//Exercicio 4 letra v.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra v. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N.G.Manzano e Jayr Figueiredo de Oliveira
//Rio de Janeiro, dia 03 de setembro de 2020.
//Visual Studio 2019
//Elaborar um programa que leia dois valores numéricos inteiros, os quais devem representar a base e o expoente de uma potência, 
//calcular a potência, armazenar em memória o resultado calculado e apresentar o resultado obtido.
//OBS: Irei revisar!

#include <iostream>

int main()
{
    int BASE, expPOTENCIA, potencia, contador;

    std::cout << "Informe o valor da base: ";
    std::cin >> BASE;
    std::cout << "Informe o valor da expoente de uma potencia: ";
    std::cin >> expPOTENCIA;

    potencia = 1;
    contador = 0;

    while (contador != expPOTENCIA)
    {
        potencia = potencia * BASE;
        contador = contador + 1;
    }

    std::cout << "RESULTADO: " << potencia << "\n";
}