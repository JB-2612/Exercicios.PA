#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//• R$ 150.500,50
//• R$ 77.200,50
//• R$ 70.300,75
//• R$ 220.299,99
//• R$ 79.999,99
//• R$ 150.500,50

int main(){
    float temp, lista[6] = {150500.50, 77200.50, 70300.75, 220299.99, 79999.99, 150500.50 };
    int i, j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(lista[j]>lista[j+1]){
            temp = lista[j];
            lista[j] = lista[j+1];
            lista[j+1] = temp;

        }}
    }
    printf("A lista de carros em ordem crescente: ");
    for(i=0;i<6;i++){
        printf("- %.2f -", lista[i]);
    }
    printf("\no carro mais barato custa: %.2f", lista[0]);

}