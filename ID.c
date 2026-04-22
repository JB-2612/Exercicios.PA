#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int id, i, entrou;
    int idv[10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
    entrou = 0;
    printf("Insira um ID: ");
    scanf("%d", &id);

    for(i = 0; i<10; i++){
        if(id == idv[i]){
            entrou = 1;
            break;
        }
    }

    if( entrou == 1){
        printf("ID da filial localizada: %d\n", id);

    } else {
        printf("ID da Filial nao localizado, tente novamente.");
    }
    
    return 0;
}