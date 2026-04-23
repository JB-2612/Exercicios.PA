#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, k, l, mat[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("insira os valores da Linha %d Coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] % 2 == 0){
                mat[i][j] = 1;
            } else {
                mat[i][j] = -1;
            }
        }
    }
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            printf("%d/", mat[k][l]);
        }
    }
    return 0;
}