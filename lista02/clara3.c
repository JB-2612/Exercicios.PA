#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a[2][3], b[2][3], c[2][3];
    int i, j, k, l;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Insira os valores da matriz a linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
            printf("Insira os valores da matriz b linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for(k=0;k<2;k++){
        for(l=0;l<3;l++){
            c[k][l] = a[k][l] + b[k][l];
        }
    }
    printf("A matriz A e: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ", a[i][j]);
        }}
    printf("\n");
    printf("A matriz B e: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ", b[i][j]);
        }}
    printf("\n");
    printf("A matriz C e: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ", c[i][j]);
        }}

    return 0;
}