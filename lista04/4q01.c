#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char frase[200], palavra [50];
int n, m, i, cont;
int main(){
    printf("Digite a frase: ");
    fgets(frase, 200, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("Digite a palavra que busca: ");
    fgets(palavra, 50, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    n = strlen(frase);
    m = strlen(palavra);

    for(i = 0; i < n; i++){
        if(strncmp(&frase[i], palavra, m) == 0){
            cont++;
            i += m - 1;
        }
    }

    printf("A palavra foi encontrada %d vezes", cont);


    return 0;
}