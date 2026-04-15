#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int av1, tb1, tb2;
float nf;
printf("Digite a nota da avaliacao: \n");
scanf("%d", &av1);
if(av1 > 10 || av1 < 0){
    printf("Nota nao valida!\n");
    return 0;
}
printf("Digite a nota do trabalho1: \n");
scanf("%d", &tb1);
if(tb1 > 10 || tb1 < 0){
    printf("Nota nao valida!\n");
    return 0;
}
printf("Digite a nota da trabalho2: \n");
scanf("%d", &tb2);
if(tb2 > 10 || tb2 < 0){
    printf("Nota nao valida!\n");
    return 0;
    
}
nf = (av1 + (tb1 + tb2)) / 3.0;

printf("A nota final foi: %.3f\n", nf);















return 0;
}