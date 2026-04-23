#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float amigo[6];
    int i, j, k;
    for (i = 0; i < 6; i++){
        printf("insira a altura do amigo%d em m: ", i+1);
        scanf("%f", &amigo[i]);
    }
    for(j = 0; j < 5; j++){
        for(k = 0; k < 5; k++){
            if (amigo[k] > amigo[k+1]){
                float temp = amigo[k];
                amigo[k] = amigo[k+1];
                amigo[k+1] = temp;
            }
        }
    }
    printf("As alturas dos amigos em ordem crescente e: %.2f %.2f %.2f %.2f %.2f %.2f\n", amigo[0], amigo[1], amigo[2], amigo[3], amigo[4], amigo[5]);
    printf("A maior altura e: %.2f\n", amigo[5]);
    printf("A menor altura e: %.2f\n", amigo[0]);
    return 0;
}