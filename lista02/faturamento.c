#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float soma, fat[8];
    int i, j;
    for(i=0;i<8;i++){
        printf("Insira o faturamento da filial %d:", i+1);
        scanf("%f", &fat[i]);
        soma = soma + fat[i];
    }
    printf("A soma dos faturamentos e: %.2f\n", soma);
    printf("As filiais que obtiveram lucro foram:");

    for(j=0; j<8; j++){
        if(fat[j]>0){
            printf("%d - ", j+1);
        }
    }












    return 0;
}