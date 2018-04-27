#pragma once

#include <iostream>
#include "IniciarJogo.h"


using namespace std;


void Finalizacao(int personagem[6]) {
	cout << "Parabens vc ganhou o jogo!!" << endl;
	cout << "Voce consegui " << personagem[0] << " de exp";
	cout << "voce matou " << personagem[1] << " monstros";
	if (personagem[2] != 0)
		cout << "Voce pegou a espada";
	if (personagem[3] != 0)
		cout << "Voce pegou o escudo";
	cout << "vc figui " << personagem[4] << " vezes";
	system("pause");
}

void menu() {

	int resposta=0;
	

	cout << "Ola jogador, escolhas as opcoes a baixo." << endl << "1-Iniciar jogo" << endl << "2-Instrucoes" << endl;
	cin >> resposta;

	if (resposta == 1) {
		system("cls");
		InicializarJogo();
	}
	else if (resposta == 2) {
		cout << "O objetivo do jogo e derrotar o Boss que se encontra na sala 13, voce começa na sala 1." << endl
			<< "Para facilitar essa jornada, vc pode pegar uma espada e um escudo, que se encontram respectivamente nas salas 4 e 2." << endl
			<< "Existem monstro nas salas 3,5,7,11, quanto mais monstros voce derrotar sua de porcentagem vitoria aumenta." << endl
			<< "Para abrir a sala 13 e necessario passar pela sala 7, que se encontra a chave." << endl;
		system("pause");
		system("cls");
		menu();
	}
	else{

		cout << "Opcao invalida, digite novamente!"<<endl;
		
		menu();

	}
}
