/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
Rio de Janeiro, dia 01 de Setembro de 2020 às 20:39hrs
Site: https://www.onlinegdb.com/online_c++_compiler
Exercicio 4 letra s. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas variáveis A e B. 
Calcular, armazenar e apresentar os resultados das quatro operações aritméticas básicas.
OBS: Hoje não estou em casa, no meu notebook. Por isso estou utilizando o site onlinegdb.com

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double A, B, Adi, Sub, Mul, Div;
    cout<<"Primeiro valor: ";
    cin>>A;
    cout<<"Segundo valor: ";
    cin>>B;
    Adi = A + B;
    Sub = A - B;
    Mul = A * B;
    Div = A / B;
    
    cout<<"\n" << A << " + " << B << " = " << Adi;
    cout<<"\n" << A << " - " << B << " = " << Sub;
    cout<<"\n" << A << " x " << B << " = " << Mul;
    cout<<"\n" << A << " / " << B << " = " << Div << "\n";
    
    return 0;
}