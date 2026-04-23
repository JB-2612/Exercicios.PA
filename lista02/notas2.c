#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i, quant;
    float media_perf, soma, notas[15];
    soma = 0;
    quant = 0;
    for (i = 0; i < 15; i++){
        printf("Insira a nota do aluno%d: ", i+1);
        scanf("%f", &notas[i]);
        quant = quant + (notas[i]/notas[i]);
        soma = soma + notas[i];
    }
    media_perf = soma/quant;
    if (media_perf > 8.00){
        media_perf = 10.00;
        printf("A sala atingiu a media perfeita que e 10.00!\n");
    } else 
    printf("a media da sala foi: %f\n", media_perf);

    return 0;
}