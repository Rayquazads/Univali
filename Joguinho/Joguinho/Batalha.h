#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int batalha(int personagem[6]) {

	int Probabilidade;

	 srand(time(NULL));

	 Probabilidade = rand() % 10+1;
	 cout << Probabilidade;
	 system("pause");

	if (personagem[3] == 40 && personagem[2] == 20) {
		
	}
	else if (personagem[3] == 40) {

	}
	else if (personagem[2] == 20) {

	}

	return 0;
}
