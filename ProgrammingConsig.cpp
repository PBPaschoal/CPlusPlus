/*Rio de Janeiro, dia 16 de Outubro de 2019.
 *Aluno: Paulo Bruno Paschoal
 *Exercicio elaborado por mim, para praticar Logica de Programação e C++ (praticando if e else).
 *OBS: SOU INICIANTE, SE ALGUÉM QUISER AJUDAR COMENTANDO, EDITANDO ETC, FIQUE À VONTADE! OBRIGADO!!
 *Selecione o orgao para emprestimo consignado;
 *Depois selecione o tipo de operação;
 *Informe os dados do cliente e da proposta;
 *Resultado deve limpar a tela e mostrar os dados do cliente mais; 
 *o percentual da comissão e o valor da comissão(em caso de refin também é mostrado o valor liberado para o cliente). 
 *Depois irei fazer o mesmo programinha mas reduzindo as linhas, acredito que a estrutura de repetição ajude. 
 *Testei em site simulador de IDE e em umas IDE's, funcionou 100%, porem algumas IDEs o comando system("cls") ou system("clear") nao funcionam.*/
 
#include <iostream>

using namespace std;

int main(){
	int org1, oper1, praz;
	double brut, parcel, comiss, sald, lib;
	string nom, cepf;
	
	cout<<"\nEscolha o Orgao para cadastramento:";
	cout<<"\n[1] = [INSS]: ";
	cout<<"\n[2] = [SIAPE]: ";
	cout<<"\n[3] = [EXERCITO]: \n\n";
	cin>>org1;
	if(org1 == 1){ //OPCAO para selecionar o orgao, caso seja INSS, ira para a linha abaixo, se nao for, ira para a proxima opção de numero 2.
		cout<<"\nVoce selecionou INSS";
		cout<<"\nEscolha o tipo de operacao para cadastramento: ";
		cout<<"\n[1] = [NOVO]: ";
		cout<<"\n[2] = [REFINANCIAMENTO]: \n";
		cin>>oper1;
		if(oper1 == 1){
			cout<<"\n------------------------------";
		cout<<"\nCADASTRAMENTO DE OPERACAO NOVA [INSS]";
			cout<<"\n------------------------------";
			cout<<"\nInforme o nome do cliente: ";
			cin>>nom;
			cout<<"\nInforme o CPF do cliente: ";
			cin>>cepf;
			cout<<"\nInforme o valor Bruto: ";
			cin>>brut;
			cout<<"\nInforme o valor da parcela: ";
			cin>>parcel;
			cout<<"\nInforme o prazo: ";
			cin>>praz;
			system("cls"); //Comentario na descrição.
			cout<<"\n------------------------------";
			cout<<"\n RESULTADO DA PROPOSTA ";
			cout<<"\n------------------------------";
			cout<<"\nCLIENTE: "<<nom;
			cout<<"\nCPF: "<<cepf;
			cout<<"\nValor Bruto: "<<brut;
			cout<<"\nParcela: "<<parcel;
			cout<<"\nPrazo: "<<praz;
			cout<<"\nPorcentagem da Comissao: 8%"; //Comissão vale 8%
			comiss = brut * 7/100; //Valor da comissão liquida à receber.
			cout<<"\nValor da Comissao: "<<comiss;
		} else if(oper1 == 2) {
			cout<<"\n------------------------------";
			cout<<"\nCADASTRAMENTO DE REFINANCIAMENTO [INSS]";
			cout<<"\n------------------------------";
			cout<<"\nInforme o nome do cliente: ";
			cin>>nom;
			cout<<"\nInforme o CPF do cliente: ";
			cin>>cepf;
			cout<<"\nInforme o valor Bruto: ";
			cin>>brut;
			cout<<"\nInforme o valor do Saldo: ";
			cin>>sald;
			cout<<"\nInforme o valor da parcela: ";
			cin>>parcel;
			cout<<"\nInforme o prazo: ";
			cin>>praz;
			system("cls"); //Comentario na descrição.
			cout<<"\n------------------------------";
			cout<<"\n RESULTADO DA PROPOSTA ";
			cout<<"\n------------------------------";
			cout<<"\nCLIENTE: "<<nom;
			cout<<"\nCPF: "<<cepf;
			cout<<"\nValor Bruto: "<<brut;
			cout<<"\nValor do Saldo: "<<sald;
			lib = brut - sald;
			cout<<"\nValor Liberado: "<<lib;
			cout<<"\nParcela: "<<parcel;
			cout<<"\nPrazo: "<<praz;
			cout<<"\nPorcentagem da Comissao: 5%"; //Comissão vale 5%
			comiss = (brut - sald) * 5/100; //Valor da comissão liquida à receber.
			cout<<"\nValor da Comissao: "<<comiss;
		} else {
			cout<<"\n--> OPCAO INVALIDA! <--";
		}
	} else if(org1 == 2){ //OPCAO para selecionar o orgao, caso seja SIAPE, ira para a linha abaixo, se nao for, ira para a proxima opção de numero 3.
		cout<<"\nVoce selecionou SIAPE";
		cout<<"\nEscolha o tipo de operacao para cadastramento: ";
		cout<<"\n[1] = [NOVO]: ";
		cout<<"\n[2] = [REFINANCIAMENTO]: \n";
		cin>>oper1;
		if(oper1 == 1){
			cout<<"\n------------------------------";
			cout<<"\nCADASTRAMENTO DE OPERACAO NOVA [SIAPE]";
			cout<<"\n------------------------------";
			cout<<"\nInforme o nome do cliente: ";
			cin>>nom;
			cout<<"\nInforme o CPF do cliente: ";
			cin>>cepf;
			cout<<"\nInforme o valor Bruto: ";
			cin>>brut;
			cout<<"\nInforme o valor da parcela: ";
			cin>>parcel;
			cout<<"\nInforme o prazo: ";
			cin>>praz;
			system("cls"); //Comentario na descrição.
			cout<<"\n------------------------------";
			cout<<"\n RESULTADO DA PROPOSTA ";
			cout<<"\n------------------------------";
			cout<<"\nCLIENTE: "<<nom;
			cout<<"\nCPF: "<<cepf;
			cout<<"\nValor Bruto: "<<brut;
			cout<<"\nParcela: "<<parcel;
			cout<<"\nPrazo: "<<praz;
			cout<<"\nPorcentagem da Comissao: 8%"; //Comissão vale 8%
			comiss = brut * 9/100; //Valor da comissão liquida à receber.
			cout<<"\nValor da Comissao: "<<comiss;
		} else if(oper1 == 2) {
			cout<<"\n------------------------------";
			cout<<"\nCADASTRAMENTO DE REFINANCIAMENTO [SIAPE]";
			cout<<"\n------------------------------";
			cout<<"\nInforme o nome do cliente: ";
			cin>>nom;
			cout<<"\nInforme o CPF do cliente: ";
			cin>>cepf;
			cout<<"\nInforme o valor Bruto: ";
			cin>>brut;
			cout<<"\nInforme o valor do Saldo: ";
			cin>>sald;
			cout<<"\nInforme o valor da parcela: ";
			cin>>parcel;
			cout<<"\nInforme o prazo: ";
			cin>>praz;
			system("cls"); //Comentario na descrição.
			cout<<"\n------------------------------";
			cout<<"\n RESULTADO DA PROPOSTA ";
			cout<<"\n------------------------------";
			cout<<"\nCLIENTE: "<<nom;
			cout<<"\nCPF: "<<cepf;
			cout<<"\nValor Bruto: "<<brut;
			cout<<"\nValor do Saldo: "<<sald;
			lib = brut - sald;
			cout<<"\nValor Liberado: "<<lib;
			cout<<"\nParcela: "<<parcel;
			cout<<"\nPrazo: "<<praz;
			cout<<"\nPorcentagem da Comissao: 6%"; //Comissão vale 6%
			comiss = (brut - sald) * 7/100; //Valor da comissão liquida à receber.
			cout<<"\nValor da Comissao: "<<comiss;
		} else {
			cout<<"\n--> OPCAO INVALIDA! <--";
		}
	} else if(org1 == 3){ //OPCAO para selecionar o orgao, caso seja EXERCITO, ira para a linha abaixo, se nao for, ira apresentar mensagem de opcao invalida.
		cout<<"\nVoce selecionou EXERCITO";
		cout<<"\nEscolha o tipo de operacao para cadastramento: ";
		cout<<"\n[1] = [NOVO]: ";
		cout<<"\n[2] = [REFINANCIAMENTO]: \n";
		cin>>oper1;
		if(oper1 == 1){
			cout<<"\n------------------------------";
			cout<<"\nCADASTRAMENTO DE OPERACAO NOVA [EXERCITO]";
			cout<<"\n------------------------------";
			cout<<"\nInforme o nome do cliente: ";
			cin>>nom;
			cout<<"\nInforme o CPF do cliente: ";
			cin>>cepf;
			cout<<"\nInforme o valor Bruto: ";
			cin>>brut;
			cout<<"\nInforme o valor da parcela: ";
			cin>>parcel;
			cout<<"\nInforme o prazo: ";
			cin>>praz;
			system("cls"); //Comentario na descrição.
			cout<<"\n------------------------------";
			cout<<"\n RESULTADO DA PROPOSTA ";
			cout<<"\n------------------------------";
			cout<<"\nCLIENTE: "<<nom;
			cout<<"\nCPF: "<<cepf;
			cout<<"\nValor Bruto: "<<brut;
			cout<<"\nParcela: "<<parcel;
			cout<<"\nPrazo: "<<praz;
			cout<<"\nPorcentagem da Comissao: 12%"; //Comissão vale 12%
			comiss = brut * 12/100; //Valor da comissão liquida à receber.
			cout<<"\nValor da Comissao: "<<comiss;
		} else if(oper1 == 2) {
			cout<<"\n------------------------------";
			cout<<"\nCADASTRAMENTO DE REFINANCIAMENTO [EXERCITO]";
			cout<<"\n------------------------------";
			cout<<"\nInforme o nome do cliente: ";
			cin>>nom;
			cout<<"\nInforme o CPF do cliente: ";
			cin>>cepf;
			cout<<"\nInforme o valor Bruto: ";
			cin>>brut;
			cout<<"\nInforme o valor do Saldo: ";
			cin>>sald;
			cout<<"\nInforme o valor da parcela: ";
			cin>>parcel;
			cout<<"\nInforme o prazo: ";
			cin>>praz;
			system("cls"); //Comentario na descrição.
			cout<<"\n------------------------------";
			cout<<"\n RESULTADO DA PROPOSTA ";
			cout<<"\n------------------------------";
			cout<<"\nCLIENTE: "<<nom;
			cout<<"\nCPF: "<<cepf;
			cout<<"\nValor Bruto: "<<brut;
			cout<<"\nValor do Saldo: "<<sald;
			lib = brut - sald;
			cout<<"\nValor Liberado: "<<lib;
			cout<<"\nParcela: "<<parcel;
			cout<<"\nPrazo: "<<praz;
			cout<<"\nPorcentagem da Comissao: 9%"; //Comissão vale 9%
			comiss = (brut - sald) * 8/100; //Valor da comissão liquida à receber.
			cout<<"\nValor da Comissao: "<<comiss;
		} else {
			cout<<"\n--> OPCAO INVALIDA! <--";
		}
	
} else {
	cout<<"\n--> OPCAO INVALIDA! <--";
}
}