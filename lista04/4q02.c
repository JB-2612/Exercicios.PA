#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char senha[20], senhac[20];

int main(){

    do {
        printf("Usuario digite sua senha: ");
        fgets(senha, 20, stdin);
        printf("\nConfirme sua senha digitando novamente: ");
        fgets(senhac, 20, stdin);

        if(strcmp(senha, senhac) != 0){
        printf("\nSenhas divergentes, tente novamente\n");
        }

    } while (strcmp(senha, senhac) != 0);
    
    if (strcmp(senha, senhac) == 0)
        printf("\nSenha cadastrada!");
    return 0;
}