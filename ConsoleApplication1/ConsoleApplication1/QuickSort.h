#pragma once

#pragma once
#include <iostream>

using namespace std;


void quickSort(int vetor[], int esquerda, int direita) {
	int i = esquerda, j = direita;
	int tmp;
	int pivot = vetor[(esquerda + direita) / 2]; //Define o pivot

												 /* Organização do vetor */
	while (i <= j) {
		while (vetor[i] < pivot)
			i++;
		while (vetor[j] > pivot)
			j--;
		if (i <= j) {
			tmp = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = tmp;
			i++;
			j--;
		}
	}

	/* Recursão */
	if (esquerda < j)
		quickSort(vetor, esquerda, j);
	if (i < direita)
		quickSort(vetor, i, direita);


}
void MostrarVetor(int Vetor[], int n)
{
	for (int i = 0; i < n; i++)
		cout << Vetor[i] << " ";
}


