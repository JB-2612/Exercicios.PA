#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Item{
    char nome[20];
    int quant;
    float peso;
};
int i;
float soma;
int main(){
    struct Item x[5];
    soma = 0;
    for(i=0; i < 5; i++){
        printf("Digite o Nome do item %d: ", i+1);
        scanf("%s", x[i].nome);
        printf("Digite a quantidade do item %d: ", i+1);
        scanf("%d", &x[i].quant);
        printf("Digite o peso do item %d: ", i+1);
        scanf("%f", &x[i].peso);
        soma = soma + (x[i].quant*x[i].peso);
    }
    if(soma <= 50){
        printf("Invertario nao esta cheio");
    } else {
        printf("Invertario cheio...");
    }

    return 0;
}
