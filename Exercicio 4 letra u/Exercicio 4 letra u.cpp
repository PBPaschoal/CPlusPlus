/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
Rio de Janeiro, dia 02 de Setembro de 2020 às 20:09hrs
Site: https://www.onlinegdb.com/online_c++_compiler
Exercicio 4 letra u. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera.
Utilize a fórmula VOLUME <- (4/3) * 3.14159*(RAIO^3).
OBS: Hoje não estou em casa, no meu notebook. Por isso estou utilizando o site onlinegdb.com
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double VOLUME, RAIO;
    cout<<"Informe o valor do RAIO: ";
    cin>>RAIO;
    VOLUME = (4.0 / 3.0) * 3.14159 * (RAIO * RAIO * RAIO);
    cout<<"Valor do VOLUME: " << VOLUME << "\n";
    
    return 0;
}