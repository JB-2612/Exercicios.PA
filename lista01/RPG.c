#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int dado;
    printf("Insira o valor do dado: ");
    scanf("%d", &dado);
    if (dado % 2 == 0){
        printf("Voce venceu!!!\n");
    } else 
        printf("Voce perdeu...\n");







    system ("pause");
    return 0;
}