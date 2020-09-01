/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
Rio de Janeiro, dia 01 de Setembro de 2020 às 20:54hrs
Site: https://www.onlinegdb.com/online_c++_compiler
Exercicio 4 letra t. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
Construir um programa que calcule, armazene e apresente em metros por segundo o valor da velocidade de um projétil 
que percorre uma distância em quilometros a um espaço do tempo em minutos. Utilize a fórmula VELOCIDADE <- 
(DISTANCIA * 100) / (TEMPO * 60).
OBS: Hoje não estou em casa, no meu notebook. Por isso estou utilizando o site onlinegdb.com

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double VELOCIDADE, DISTANCIA, TEMPO;
    cout<<"Informe a Distancia: ";
    cin>>DISTANCIA;
    cout<<"Informe o Tempo: ";
    cin>>TEMPO;
    VELOCIDADE = (DISTANCIA * 1000)/(TEMPO * 60);
    cout<<"\nVelocidade do projetil = " << VELOCIDADE << "km/h\n";
    
    return 0;
}
