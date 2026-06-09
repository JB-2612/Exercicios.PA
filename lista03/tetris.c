#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Participante
{
    int p;
    char nome[100];
};

int main(){
    struct Participante p1;
    printf("Insira os pontos obtidos pelo jogador: ");
    scanf("%d", &p1.p);
    printf("Insira o nome do jogador: ");
    scanf("%s", &p1.nome);

    printf("Nome: %s\n", p1.nome);
    printf("Pontuação: %d", p1.p);

    return 0;
}
