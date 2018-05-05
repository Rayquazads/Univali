#pragma once

#include <iostream>
#include <string>
#include "MovimentarPersonagem.h"


using namespace std;

int CriarPersonagem(int Personagem[7]) {

	Personagem[0] = 0;//Exp
	Personagem[1] = 0;//Quantos Monstros matou
	Personagem[2] = 0;//Espada
	Personagem[3] = 0;//Escudo
	Personagem[4] = 0;//Quantas vezes fugiu
	Personagem[5] = 1;//Sala onde esta
	Personagem[6] = 1;//vida

	return *Personagem;
}


//int Matriz(bool verificacao,int sala,int SalasPosiveis[2]) {
//	
//	
//	int matriz[13][5] = {
//		2,3,0,0,0,//1
//		4,5,0,40,0,//2			//20=espada
//		5,6,30,0,0,//3			//30=Monstro
//		5,6,0,0,20,//4			//40=escudo
//		6,7,30,0,0,//5
//		7,8,0,0,0,//6
//		9,10,30,0,0,//7
//		10,11,0,0,0,//8
//		10,11,0,0,0,//9
//		11,12,30,0,0,//10
//		12,13,0,0,0,//11
//		13,4,0,0,0,//12
//		0,0,30,0,0//13
//	};
//	if (verificacao == true) {
//		for (int i = sala; i < 1; i++) {
//			for (int j = 0; j < 2; j++) {
//				SalasPosiveis[j] = matriz[i][j];
//			}
//		}
//		return *SalasPosiveis;
//	}
//	return 0;
//}


void InicializarJogo() {
	int *Personagem;
	Personagem = new int[6];
	//Matriz(false, NULL, NULL,NULL);
	CriarPersonagem(Personagem);
	Movimento(Personagem);

}
