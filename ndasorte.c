#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

	int chute;
	srand(time(NULL));
	int nsorte = rand() % 100;
	int nivel;
	int tentativas;


	printf("**********************************\n");
	printf("*Bem vindo ao jogo de adivinhacao*\n");
	printf("**********************************\n");
	printf("   Escolha a dificuldade:\n");
	printf("1-facil  2-medio  3-dificil\n");
	scanf("%d", &nivel);

	switch(nivel){
		case(1):
		tentativas = 7;
		break;

		case(2):
		tentativas = 5;
		break;

		default:
		tentativas = 3;
		break;

	}

	printf("--Agora escolha um numero de 1 a 100\n");

	for(int i = 1; i <= tentativas; i++) {

	printf("+ Tentativa %d de %d + \n", i, tentativas);
	scanf("%d", &chute);

		int maior = chute > nsorte;
		int menor = chute < nsorte;
		int ganhou = chute == nsorte;

	if(ganhou){
		printf("Parabens, voce acertou o numero secreto (ﾉ◕ヮ◕)ﾉ*:・ﾟ✧\n\n");
		break;
	}
	else if(chute<0){
		printf("Voce nao pode chutar numeros negativos\n\n");
		i--;
	}
	else if(chute>100){
		printf("Voce nao pode chutar numeros maior que 100\n\n");
		i--;
	}
	else if(maior){
		printf("Seu chute foi maior que o numero secreto\n\n");
	}
	else if(menor){
		printf("Seu chute foi menor que o numero secreto\n\n");
	}
}
	if(chute!=nsorte){
		printf("Vocẽ perdeu ¯\\_(ツ)_/¯ Tente novamente!\n");
	}
}
