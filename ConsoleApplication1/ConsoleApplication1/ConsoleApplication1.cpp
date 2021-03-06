// ConsoleApplication1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "QuickSort.h"

using namespace std;


int main()
{
	int *vetor;
	int tamanho;
	
	cout << "Digite um valor: " << endl;
	cin >> tamanho;

	vetor = new int [tamanho];
	
	srand(time(NULL));

	for (int i = 0; i < tamanho; i++) {
		vetor[i] = rand() % 1000;
	}

	//MostrarVetor(vetor, tamanho);

	quickSort(vetor, 0, tamanho-1);

	cout << endl;

	MostrarVetor(vetor, tamanho);


    return 0;
}

