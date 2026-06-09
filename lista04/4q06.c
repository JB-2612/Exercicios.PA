#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char palavra[20], inversao[20];
int x, i, j;


int main(){

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    x = strlen(palavra);
    for( i = x-1; i>=0; i--){
        inversao[j] = palavra[i];
        j++;
    }

    inversao[j] = '\0';
    if(strcmp(inversao, palavra) == 0){
        printf("%s e palindromo", palavra);
    } else{
        printf("nao e palindromo");
    }

    return 0;
}