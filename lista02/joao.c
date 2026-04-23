#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char nomes[7][11];
    int i, j;
    for(i=0;i<7;i++){
        printf("Digite o nome do candidato %d (max de 10 letras): ", i+1);
        scanf("%s", &nomes[i]);}


    for(i=6;i>=0;i--){
        printf("O candidato %d %s pode sair\n", i+1, nomes[i]);
    }
    return 0;
}