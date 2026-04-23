#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float media, empresa[20];
    int i, j, quant, soma;
    soma = 0;
    quant = 0;
    for (i = 0; i < 20; i++) {
        printf("Insira o lucro/preju da filial %d: ", i+1);
        scanf("%f", &empresa[i]);
        quant = quant + (empresa[i]/empresa[i]);
        soma = soma  + empresa[i];

    }
    media = soma/quant;
    printf("a media das filiais foi: %.4f\n", media);
    printf("A filiais que obtiveram lucro foram: ");
    for (j = 0; j < 20; j++) {
        if(empresa[j] > 0){
            printf("%d - ", j+1);
        }
    }
    return 0;
}