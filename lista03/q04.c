#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
    char nome[20];
    float preco;
    int quant;
};
int i, j, n;
int main(){
    float soma = 0;
    printf("Digite quantos produtos pretende cadastrar: ");
    scanf("%d", &n);
    getchar();
    struct Produto p[n];
    for(i=0; i < n; i++){
        printf("digite o nome do produto: ");
        gets(p[i].nome);
        printf("\ndigite o preco do produto: ");
        scanf("%f", &p[i].preco);
        printf("\ndigite a quantidade desse produto: ");
        scanf("%d", &p[i].quant);
        getchar();
        soma = soma + (p[i].preco * p[i].quant);
    }
    printf("A estimativa de receita e: %.2f", soma);

    return 0;
}