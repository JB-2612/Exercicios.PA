#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, k, e, cidades[3][3];
    float media;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Informe a idade da cidade %d do estado %d: ", j+1, i+1);
            scanf("%d", &cidades[i][j]);
        }
    }
    for(k=0;k<3;k++){
        printf("Idade da Cidade 1 do estado %d: %d\n", k+1, cidades[k][0]);
        printf("Idade da Cidade 2 do estado %d: %d\n", k+1, cidades[k][1]);
        printf("Idade da Cidade 3 do estado %d: %d\n", k+1, cidades[k][2]);
    }
    printf("Insira o estado que voce quer ver a media das idades das cidades: ");
    scanf("%d", &e);
    if(e == 1){
        media = (cidades[0][0] + cidades[0][1] + cidades[0][2])/3;
    } else if(e == 2){
        media = (cidades[1][0] + cidades[1][1] + cidades[1][2])/3;
        } else {
            media = (cidades[2][0] + cidades[2][1] + cidades[2][2])/3;
            }
    printf("%.2f", media);
    return 0;
}