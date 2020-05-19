#include <iostream>
#define numero 13 //definindo variável numero como constante (Nao muda o valor)

using namespace std;
int main(int argc, char *argv[]) {
	
	char continuar = 's'; //variável constinuar criada para fazer o controle de continuar ou encerrar jogo
	int chute; //variável para salvar os 
	int tentativas; //variável para guardar número de tentativas erradas.
	
	cout << "Consegue adivinhar o numero magico!" << endl; //Começa o jogo


		while(continuar == 's') { //Enquanto "continuar" for igual a 's' usuário quer jogar, então faça isso:
			cout << "tente um número: ";
			tentativas = 0; //zera a quantidade de tentativas toda vez que o jogo inicia
			cin >> chute; //Armazena em "chute" a tentativa do usuário.
			
			
			while(chute != numero) { //Enquanto "chute" for diferente de 13 faça isso
				cout << "ERROU! ";
			
				if(chute >= 20) { //Se o "chute" for maior ou igual a 20
				cout << "dica: Tente um número menor" << endl;
				}
				if(chute > 10 && chute < 20) { //Se o "chute" for entre 11 e 19
					cout << "dica: Um número está correto!" << endl;
				}
				if(chute <= 10) { //Se o chute for menor ou igual a 10
					cout << "dica: Tente um número maior" << endl;
				}
				cin >> chute; //usuário errou o chute, ele vai tentar novamente.
				++tentativas; //adiciona 1 na quantidade de tentativas.
			}
			
			if(chute == numero) { //Se acertar o número 13
				cout << endl
				<< "*********************************" << endl << 
				"**       !!! ACERTOU !!!       **" << endl <<
				"**   número de tentativas: " <<
				tentativas << "   **"<< endl <<
				"*********************************" << endl;

				cout << endl <<"Deseja continuar? (s/n)";
				cin >> continuar; //Recebe a resposta se o usuário quer continuar jogando ou não.
								  //Se ele responder 'n' a condição do primeiro while loop é quebrada, encerrando-o.
			}
			
		}
		cout << endl << endl << endl;
		for(int i = 0; i < 52; i++) { //Imprime a menssagem de fim de jogo.

			if(i < 26) {
				cout << "-";
			}

			if(i == 26) {
				cout << endl << "|  ..:: FIM DE JOGO ::.. |" << endl;
			}
			
			if(i >= 26) {
				cout << "-";
			}
		}
		return 0;
	}