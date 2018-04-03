#pragma once

#include "OrdenarVetor.h"
#include "OrdenacaoMatriz.h";
#include <iostream>

using namespace std;

void MostrarVetor(int vetor[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		cout << vetor[i] << "\t";
	}
	cout << endl;
}


void OpcaoVetor() {
	int *vetor,tamanho;
	
	cout << "digite o tamanho do vetor: " << endl;
	cin >> tamanho;
	vetor = new int[tamanho];
	for (int i = 0; i < tamanho; i++) {
		cout << "Digite um valor para o vetor: " << endl;
		cin >> vetor[i];
	}

	int resposta;
	bool ordem;
	
	cout << "Para ordenar crescente 1 para decrescente 2." << endl;
	cin >> resposta;

	if (resposta == 1) {
		bubbleSort(vetor, tamanho, ordem=true);
		MostrarVetor(vetor, tamanho);
		cout << "Maior valor eh: " << maiorValorEmVetor(vetor,tamanho) << endl;			
		cout << "Menor valor eh: " << menorValorEmVetor(vetor,tamanho) << endl;
		system("pause");
	}
	else if (resposta == 2) {
		bubbleSort(vetor, tamanho, ordem=false);
		MostrarVetor(vetor, tamanho);
		cout << "Maior valor eh: " << maiorValorEmVetor(vetor,tamanho) << endl;
		cout << "Menor valor eh: " << menorValorEmVetor(vetor,tamanho) << endl;
		system("pause");
	}
	else
	{
		cout << "Valor invalido!" << endl;
		system("pause");
	}
	
}

void OpcaoMatriz() {
	int resposta,opcao;
	int Matriz[5][5]{ 
		4,2,5,6,1,
		3,7,9,8,10,
		12,11,13,15,14,
		16,18,17,19,21,
		20,22,23,25,24 };

	cout << "Para o maior valor digite 1"<<endl<<"Para o menor digite 2"<<endl<< "Para a diagonal principal 3"<<endl<< "Para a diagonal secundaria 4"<<endl<< "Para a principal e a secundaria eh 5: " << endl;
	cin >> resposta;

	if (resposta==1) {
		cout << "Maior valor eh: " << maiorValorEmMatriz(Matriz) << endl;
		system("pause");
	}
	else if (resposta == 2) {
		cout << "Menor Valor eh: " << menorValorEmMatriz(Matriz) << endl;
		system("pause");
	}
	else if (resposta == 3) {
		cout << "Para maior numero 1." << endl << "Para menor 2." << endl;
		cin >> opcao;
		cout<<"O valor eh "<<ValorDiagonalPrincipal(Matriz, opcao)<<endl;
		system("pause");
	}
	else if (resposta == 4) {
		cout << "Para maior numero 1." << endl << "Para menor 2." << endl;
		cin >> opcao;
		cout << "O valor eh " << ValorDiagonalSecundaria(Matriz, opcao) << endl;
		system("pause");
	}
	else if (resposta == 5) {
		cout << "Para maior numero 1." << endl << "Para menor 2." << endl;
		cin >> opcao;
		cout << "O valor da diagonal princiapal eh " << ValorDiagonalPrincipal(Matriz, opcao) << endl;
		cout << "O valor da diagonal secundaria eh " << ValorDiagonalSecundaria(Matriz, opcao) << endl;
		system("pause");
	}
	else
	{
		cout << "Valor invalido!" << endl;
		system("pause");
	}

}

void Menu() {
	int resposta,contador=0;
	cout << "Digite uma das opcoes: " << endl << "1-Ordenar vetor, maior valor do vetor e menor." << endl << "2-Opcoes da matriz." << endl;
	cin >> resposta;
	
	if (resposta == 1) {
		OpcaoVetor();
	}
	else if (resposta == 2) {
		OpcaoMatriz();
	}
	else
	{
		cout << "Opcao invalida!" << endl;
		system("pause");
	}
	
}