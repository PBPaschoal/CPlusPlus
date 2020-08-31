/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

Rio de Janeiro, dia 31 de Agosto de 2020 às 17:48hrs
Site: https://www.onlinegdb.com/online_c++_compiler
Exercicio 4 letra r. Do livro ALGORITMOS - Lógica para desenvolvimento de programação de computadores. 29º Edição.
José Augusto N. G. Manzano e Jayr Figueiredo de Oliveira
Em uma eleição sindical concorreram ao cargo de presidente três candidatos (representados pelas variáveis A, B e C).
Durante a apuração dos votos foram computados votos nulos e em branco, além dos votos válidos para cada candidato.
Deve ser criado um programa de computador que faça a leitura da quantidade de votos válidos para cada candidato, 
além de ler também a quantidade de votos nulos e em branco. Ao final, o programa deve apresentar o número total de 
eleitores, considerando votos válidos, nulos e em branco; o percentual correspondente de votos válidos em relação 
à quantidade de eleitores; o percentual correspondente de votos válidos do candidato A em relação à quantidade 
de eleitores; o percentual correspondente de votos válidos do candidato B em relação à quantidade de eleitores; o 
percentual correspondente de votos válidos do candidato C em relação à quantidade de eleitores; o percentual 
correspondente de votos nulos em relação à quantidade de eleitores; e, por último, o percentual correspondente 
de votos em branco em relação à quantidade de eleitores. Todos os cálculos devem efetivamente ser armazenados 
em memória.
OBS: Hoje não estou em casa, no meu notebook. Por isso estou utilizando o site onlinegdb.com
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int A, B, C, N, Br, TV, TNB, TotalCand;
    float percTTL, perceA, perceB, perceC, perceN, perceBr;
    
    cout<<"Candidato A VOTOS: ";
    cin>>A;
    cout<<"Candidato B VOTOS: ";
    cin>>B;
    cout<<"Candidato C VOTOS: ";
    cin>>C;
    cout<<"VOTOS NULOS: ";
    cin>>N;
    cout<<"VOTOS EM BRANCO: ";
    cin>>Br;
    
    TV = A + B + C;
    TNB = N + Br;
    TotalCand = TV + TNB;
    
    percTTL = (TV * 100) / TotalCand;
    perceA = (A * 100) / TotalCand;
    perceB = (B * 100) / TotalCand;
    perceC = (C * 100) / TotalCand;
    perceN = (N * 100) / TotalCand;
    perceBr = (Br * 100) / TotalCand;
    
    cout<<"\n\n\nTotal de votos validos: " << TV;
    cout<<"\nTotal de votos nulos e em brancos: " << TNB;
    cout<<"\nTotal de eleitores: " << TotalCand;
    cout<<"\nPercentual do total validos: " << percTTL << "%";
    cout<<"\nPercentual validos de A: " << perceA << "%";
    cout<<"\nPercentual validos de B: " << perceB << "%";
    cout<<"\nPercentual validos de C: " << perceC << "%";
    cout<<"\nPercentual validos de nulos: " << perceN << "%";
    cout<<"\nPercentual validos em branco: " << perceBr << "%";
    
    return 0;
}