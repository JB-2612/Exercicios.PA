#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, k, temp, soma1, soma2, soma3, soma4, soma5, mat[5][5];
    temp = 1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = temp;
            temp++;
            printf("%d ", mat[i][j]);
        }}
    soma1 = mat[0][0] + mat[0][1] + mat[0][2] + mat[0][3] + mat[0][4];
    printf("A soma dos elementos da primeira linha e: %d\n", soma1);
    soma2 = mat[1][0] + mat[1][1] + mat[1][2] + mat[1][3] + mat[1][4];
    printf("A soma dos elementos da segunda linha e: %d\n", soma2);
    soma3 = mat[2][0] + mat[2][1] + mat[2][2] + mat[2][3] + mat[2][4];
    printf("A soma dos elementos da terceira linha e: %d\n", soma3);
    soma4 = mat[3][0] + mat[3][1] + mat[3][2] + mat[3][3] + mat[3][4];
    printf("A soma dos elementos da quarta linha e: %d\n", soma4);
    soma5 = mat[4][0] + mat[4][1] + mat[4][2] + mat[4][3] + mat[4][4];
    printf("A soma dos elementos da quinta linha e: %d\n", soma5);
    
    printf("E aqui estão os valores da diagonal dessa matriz: ");
    for(k=0;k<5;k++){
        printf("%d ", mat[k][k]);
    }

    







    return 0;
}