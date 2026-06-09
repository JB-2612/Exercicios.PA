#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int limite = 140;
char palavra[200];
int tam;

int main(){
    printf("Digite uma palavra: ");
    fgets(palavra, 200, stdin);
    tam = strlen(palavra);

    if (tam <= 140){
        printf("Voce usou %d caracteres, restam %d", tam, (140 - tam));
    } else if( tam == 140){
            printf("Voce usou todos os 140 caracteres !");
        } else 
            printf("Voce excedeu o limite de caracteres em %d", (tam - 140));
    return 0;
}