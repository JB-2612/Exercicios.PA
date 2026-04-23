#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i, j, mat[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat[i][j] = i + j;
            printf("%d ", mat[i][j]);
        }
    }
    return 0;
}