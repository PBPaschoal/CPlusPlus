//Exercicio 4 letra z.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Exercicio 4 letra z. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
//José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
//Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado inteiro do quadrado da divisão do 
//valor da variável A em relação ao valor da variável B armazenado em memória.
//Rio de Janeiro, dia 07-09-2020 às 22:00hrs

#include <iostream>

int main()
{
    int A, B, Div, Resultado;

    std::cout << "Informe o primeiro valor: ";
    std::cin >> A;
    std::cout << "Informe o segundo valor: ";
    std::cin >> B;
    Div = A / B;
    Resultado = Div * Div;
    std::cout << "Resultado inteiro do quadrado da divisao do primeiro valor em relacao ao segundo valor = " << Resultado << "\n\n";

}