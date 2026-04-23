#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float media, empresa[10];
    int i, j, quantl;
    quantl = 0;
    for (i = 0; i < 10; i++) {
        printf("Insira o lucro/preju da filial %d: ", i+1);
        scanf("%f", &empresa[i]);
    }

    for (j = 0; j < 10; j++) {
        if(empresa[j] > 0){
            quantl = quantl + (empresa[j]/empresa[j]);
        }
    }
    printf("As filiais que estao dando lucro sao: %d\n", quantl);
    printf("As filiais que estao em preju sao: %d\n", abs(10-quantl));

    return 0;
}