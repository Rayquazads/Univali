#pragma once

#include <iostream>
#include "Interface.h"
#include "Batalha.h"


using namespace std;

int Matriz(bool verificacao, int sala, int SalasPosiveis[2]) {


	int matriz[13][5] = {
		2,3,0,0,0,//1
		4,5,0,40,0,//2			//20=espada
		5,6,30,0,0,//3			//30=Monstro
		5,6,0,0,20,//4			//40=escudo
		6,7,30,0,0,//5
		7,8,0,0,0,//6
		9,10,30,0,0,//7
		10,11,0,0,0,//8
		10,11,0,0,0,//9
		11,12,30,0,0,//10
		12,13,0,0,0,//11
		13,4,0,0,0,//12
		0,0,30,0,0//13
	};
	if (matriz[sala][3] == 30) {
		//batalha(personagem);

	}
	if (verificacao == true) {
		for (int i = sala; i <= sala; i++) {
			for (int j = 0; j < 2; j++) {
				SalasPosiveis[j] = matriz[i-1][j];
			}
		}
		return *SalasPosiveis;
	}
	
	
	return 0;
}


void Movimento(int persongem[6]) {
	
	if (persongem[5] >= 13) {
		//Finalizacao(persongem);
		exit(0);
	}
	int *SalasPossiveis;
	int resposta;
	SalasPossiveis = new int[2];
	SalasPossiveis[2] = { 0 };
	
	cout << "Voce esta na sala " << persongem[5]<<endl;
	Matriz(true, persongem[5], SalasPossiveis);
	cout << "Essa são as salas possiveis para ir: " << endl;
	for (int i = 0; i < 2; i++) {
		cout << SalasPossiveis[i] << endl;
	}
	
	do{
		cout << "Digite a sala que deseja ir: " << endl;
		cin >> persongem[5];
		cout << persongem[5];

	} while (persongem[5] != SalasPossiveis[0] && persongem[5] != SalasPossiveis[1]);
	
		
	Movimento(persongem);
}

