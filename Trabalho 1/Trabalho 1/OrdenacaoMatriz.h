#pragma once
#define TAMANHO_MATRIZ 5

int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
	int MaiorValor = matriz[0][0];
	for (int i = 0; i < TAMANHO_MATRIZ; i++) {
		for (int j = 0; j < TAMANHO_MATRIZ; j++) {
			if (MaiorValor < matriz[i][j]) {
				MaiorValor = matriz[i][j];
			}
		}
	}
	return MaiorValor;
}
int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
	int MenorValor = matriz[0][0];
	for (int i = 0; i < TAMANHO_MATRIZ; i++) {
		for (int j = 0; j < TAMANHO_MATRIZ; j++) {
			if (MenorValor > matriz[i][j]) {
				MenorValor = matriz[i][j];
			}
		}
	}
	return MenorValor;
}

int ValorDiagonalPrincipal(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ],int opcao) {
	int menor = matriz[0][0];
	int maior = matriz[0][0];
	for (int i = 0; i < TAMANHO_MATRIZ; i++) {
		for (int j = 0; j < TAMANHO_MATRIZ; j++) {

			if (i==j) {
				if (matriz[i][j] > maior)
					maior = matriz[i][j];
				if (matriz[i][j] < menor)
					menor = matriz[i][j];
			}
			

		}
	}
	if (opcao == 1)
		return maior;
	if (opcao == 2)
		return menor;
	
}

int ValorDiagonalSecundaria(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int opcao) {
	int maior = matriz[0][0], menor = matriz[0][0];
	for (int i = 0; i < TAMANHO_MATRIZ; i++) {
		for (int j = 0; j < TAMANHO_MATRIZ; j++) {

			if (i + j + 1 == TAMANHO_MATRIZ) {
				if (matriz[i][j] > maior)
					maior = matriz[i][j];
				if (matriz[i][j] < menor)
					menor = matriz[i][j];
			}

		}
	}
	if (opcao == 1) {
		return maior;
	}
	else if (opcao == 2) {
		return menor;
	}
	return 0;

	
}