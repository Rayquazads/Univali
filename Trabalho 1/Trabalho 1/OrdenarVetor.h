#pragma once
#include <iostream>

using namespace std;



int bubbleSort(int vetor[], int tamanho, bool ordenacaoCrescente) {
	int aux;
	if (ordenacaoCrescente == true) {
		for (int i = 0; i < tamanho-1; i++) {
			for (int j = 0; j < tamanho-1; j++) {
				if (vetor[j] > vetor[j + 1]) {
					aux = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = aux;
				}
			}
		}
	}
	else if (ordenacaoCrescente==false){
		for (int i = tamanho - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (vetor[j] < vetor[j + 1]) {
					aux = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = aux;
				}
			}
		}
	}
	return *vetor;
}


int menorValorEmVetor(int vetor[], int tamanho) {
	int MenorValor = vetor[0];
	for (int i = 0; i < tamanho; i++) {
		if (vetor[i] < MenorValor) {
			MenorValor = vetor[i];
		}
	}
	return MenorValor;
}

int maiorValorEmVetor(int vetor[], int tamanho) {
	int MaiorValor = vetor[0];

	for (int i = 0; i < tamanho; i++) {
		if (vetor[i] > MaiorValor) {
			MaiorValor = vetor[i];
		}
	}
	return MaiorValor;
}