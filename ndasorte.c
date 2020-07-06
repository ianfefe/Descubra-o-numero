#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

  int chute;
  srand(time(NULL));
  int nsorte = rand() % 100;
  char nivel;
  int tentativas;
  int dificuldade;

  printf("\n**********************************\n");
  printf("\n*Bem vindo ao jogo de adivinhacao*\n");
  printf("\n**********************************\n");
  
  do {      

      dificuldade = 0;
      printf("Escolha a dificuldade\n");
      printf("(1)Facil  (2)Medio  (3)Dificil\n");

      scanf("%s", &nivel);

      switch(nivel) {

        case '1': 
          tentativas = 7;
          break; 
        case '2': 
          tentativas = 5;
          break;
        case '3': 
          tentativas = 3; 
          break;
        default:
          printf("Escolheu uma opção inválida\n\n");
          dificuldade = 1;
          break;
           }

      } while (dificuldade==1);

  printf("--Agora escolha um numero de 1 a 100\n");

  for(int i = 1; i <= tentativas; i++) {

    printf("\n+ Tentativa %d de %d + \n", i, tentativas);
    scanf("%d", &chute);

      int maior = chute > nsorte;
      int menor = chute < nsorte;
      int ganhou = chute == nsorte;

    if(ganhou){
      printf("Parabens, voce acertou o numero secreto (ﾉ◕ヮ◕)ﾉ*:・ﾟ✧\n\n");
      break;
    }
    else if(chute<0 || chute>100){
      printf("Só vale numeros entre 0 e 100\n\n");
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
return 0;
}
