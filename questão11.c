//todos os imports necessários.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definindo o tamanho máximo, em bytes de cada linha.
#define MAX_LINE 1024

int main(){
    //primeiramente, o mais essencial será abrir o arquivo.
    FILE *arquivo = fopen("results.csv","r");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
}