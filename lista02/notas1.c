#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i, quant;
    float media_fun, soma, notas[10];
    soma = 0;
    quant = 0;
    for (i = 0; i < 10; i++){
        printf("Insira a nota do aluno%d: ", i+1);
        scanf("%f", &notas[i]);
        if (notas[i]>4.00){
        quant = quant + (notas[i]/notas[i]);
        soma = soma + notas[i];}
    }
    media_fun = soma/quant;
    printf("a media funcional da sala e: %f\n", media_fun);

    return 0;
}