#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Personagem {
    char nome[20];
    int hp;
    int atk;
    int def;
};
int i;
int main(){
    struct Personagem p[2];
    for(i = 0; i < 2; i++){
        printf("Digite o nome do p%d: ", i+1);
        gets(p[i].nome);
        printf("Digite o hp do p%d: ", i+1);
        scanf("%d", &p[i].hp);
        printf("Digite o ataque do p%d: ", i+1);
        scanf("%d", &p[i].atk);
        printf("Digite a defesa do p%d: ", i+1);
        scanf("%d", &p[i].def);
        getchar();
    }
    int vida_1 = p[0].hp - (p[1].atk - p[0].def);
    int vida_2 = p[1].hp - (p[0].atk - p[1].def);
    if (vida_1 > vida_2){
        printf("o personagem %s ganhou", p[0].nome);
    } else if( vida_1 < vida_2 ){
            printf("o personagem %s ganhou", p[1].nome);
        } else{
            printf("Empate");
        }
    return 0;
}