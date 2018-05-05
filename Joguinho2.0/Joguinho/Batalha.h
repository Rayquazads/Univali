#pragma once

#include "Interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void Finalizacao(int personagem[7]) {
	if (personagem[6] == 0) {
		cout << "Voce perdeu ; ;" << endl;
	}
	else
	{
		cout << "Parabens vc ganhou o jogo!!" << endl;
	}
	cout << "Voce consegui " << personagem[0] << " de exp"<<endl;
	cout << "voce matou " << personagem[1] << " monstros"<<endl;
	if (personagem[2] != 0)
		cout << "Voce pegou a espada"<<endl;
	if (personagem[3] != 0)
		cout << "Voce pegou o escudo"<<endl;
	cout << "vc figui " << personagem[4] << " vezes"<<endl;
	system("pause");
	exit(0);
}

int batalha(int personagem[7]) {

	int Probabilidade,resposta,Probalidade2;

	 srand(time(NULL));

	 Probabilidade = rand() % 10+1;
	 Probalidade2 = rand() % 4 + 1;
	 system("cls");
	 cout << "Nessa sala tem um monstro, deseja enfrentar ou fugir?" << endl << "Enfrentar=1" << endl << "Fugir=2" << endl;
	 cin >> resposta;

	 switch (resposta)
	 {
		case 1:
			if (personagem[3] != 40 && personagem[2] != 20) {
				if (Probalidade2 <= 1) {
					personagem[1] += 1;
					cout << "Voce ganhou essa luta" << endl;
					system("pause");
					system("cls");
					return *personagem;
				}
				personagem[6] -= 1;
				Finalizacao(personagem);
				return *personagem;
			}
		 else if (personagem[3] == 40 && personagem[2] == 20) {
			 if (Probabilidade <= 1 || Probabilidade >= 7) {
				 personagem[1] += 1;
				 cout << "Voce ganhou essa luta" << endl;
				 system("pause");
				 system("cls");
				 return *personagem;
			 }
			 personagem[6] -= 1;
			 Finalizacao(personagem);
			 return *personagem;
		 }
		 else if (personagem[3] == 40 && personagem[2] != 20) {
			 cout << "Nao pode atacar so com o escudo!" << endl;
			 batalha(personagem);
		 }
		 else if (personagem[2] == 20 && personagem[3] != 40) {
			 if (Probabilidade <= 1 || Probabilidade >= 6) {
				 personagem[1] += 1;
				 cout << "Voce ganhou essa luta" << endl;
				 system("pause");
				 system("cls");
				 return *personagem;
			 }
			 personagem[6] -= 1;
			 Finalizacao(personagem);
			 return *personagem;

		 }
		 break;
		case 2:
			if (personagem[3] != 40 && personagem[2] != 20) {
				if (Probalidade2 <= 1) {
					personagem[1] += 1;
					cout << "Voce ganhou essa luta" << endl;
					system("pause");
					system("cls");
					return *personagem;
				}
				personagem[6] -= 1;
				Finalizacao(personagem);
				return *personagem;
			}
			else if (personagem[3] == 40 && personagem[2] == 20) {
				if (Probabilidade <= 1 || Probabilidade >= 7) {
					personagem[1] += 1;
					cout << "Voce ganhou essa luta" << endl;
					return *personagem;
				}
				personagem[6] -= 1;
				Finalizacao(personagem);
				return *personagem;
			}
			else if (personagem[3] == 40 && personagem[2] != 20) {
				
				if (Probabilidade <= 1 || Probabilidade >= 4) {
					personagem[1] += 1;
					cout << "Voce ganhou essa luta" << endl;
					return *personagem;
				}
				personagem[6] -= 1;
				Finalizacao(personagem);
				return *personagem;
			}
			else if (personagem[2] == 20 && personagem[3] != 40) {
				cout << "Nao pode fugir so com a espada!" << endl;
				batalha(personagem);
			}
	 }

	

	return 0;
}

