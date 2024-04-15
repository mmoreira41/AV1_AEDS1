#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

srand(time(NULL));


    int portaEscolhida = 0;
    int portaPremiada = rand()%3 + 1;
    int portaVazia = rand()%3 + 1;
    char opcao[1];

    printf("Seja Bem Vindo ao jogo Monty Hall!\nEscolha um porta(1,2 e 3):");
    scanf("%d", &portaEscolhida);

    printf("\n\nPremiada: %d. Vazia: %d.Escolhida: %d\n", portaPremiada, portaVazia, portaEscolhida);



    while(portaPremiada == portaVazia || portaEscolhida == portaVazia){
        portaVazia = rand()%3 + 1;
        printf("Premiada: %d. Vazia: %d.\n", portaPremiada, portaVazia);
        continue;
    }

    printf("Muito bem! Vou abrir a porta vazia, que e a porta: %d.\n",portaVazia );
    printf("Com isso Voce deseja trocar para a outra porta(s/n)? ");
    scanf(" %c", &opcao);

    if(opcao == "n" ){
        printf("a");
        if(portaEscolhida == portaPremiada){
            printf("Você ganhou! Parabéns!");
        }else{
            printf("Você perdeu. A porta premiada era: %d", portaPremiada);
        }
    }else if(opcao == "s"){
        while(portaEscolhida == portaVazia || portaEscolhida == portaPremiada){
            portaEscolhida = rand()%3 + 1;
            continue;
        }
        printf("Você perdeu. A porta premiada era a 2.");
    }


}
