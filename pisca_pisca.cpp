#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	int  i, p, j, y; // Valiaveis para laco de repeticao
	
	char caractere  = '8';						// Mudar o caracter
	int  time       = 1000;						// Mudar o tempo que demora para cada mudança de posicao
	int  repete     = 2;						// Numero de vezes que ele repete a impressao
	int  quantCarac = 4;						// Numero de vezes que ele repete os caracteres
	
	do{	
		for(i = 0; i < quantCarac; i++){
			string pisca = " "; 				// Definindo a variaveil pisca como "NULL"
			for(p = 0; p < quantCarac; p++){
				pisca += " "; 					// Repitindo o numero de caracteres escolhido na variavel quantCarac
			}
			for(j = 0; j < quantCarac; j++){
				pisca[i] = caractere; 			// Alterando 1 posicao vazia por vez pelo caractere escolhido
			}
			for(y= 0; y < repete; y++){
				cout << pisca;
			}
			Sleep(time); 						// Espera entre 1 caractere e outro
			system("cls");
		}	
	}while(i != 0); // Repeticao infinita
}
