//Para uma determinada edição dos jogos olímpicos, calcule o peso médio dos atletas medalhistas.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //primeireo passo será guardar o ID de todos os atletas que ganharam algum jogo de determinada edição.

    FILE *arquivo = fopen("arquivoscsvs/results/results.csv","r");//pega os arquivos com todos os jogos.
    int edição_escolhida=9999;
    while (1==1){
        printf("Digite qual edição das olímpiadas você deseja calcular o peso médio:");
        scanf("%d", &edição_escolhida);
        if(edição_escolhida%2 != 0){
            printf("Nesse ano não ouve competição.");
            return 1;// realiza o fim do programa.
        }
    }
    
    return 0;
}