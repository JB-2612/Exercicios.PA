#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float n1, n2, n3;
    printf("Insira a nota 1: ");
    scanf("%f", &n1);
    printf("Insira a nota 2: ");
    scanf("%f", &n2);
    printf("Insira a nota 3: ");
    scanf("%f", &n3);
    if (n1>n2 && n2>n3){
        printf("maior nota: %.2f\n", n1);
        printf("nota média: %.2f\n", n2);
        printf("menor nota: %.2f\n", n3);
    } else if(n2>n1 && n1>n3){
        printf("maior nota: %.2f\n", n2);
        printf("nota média: %.2f\n", n1);
        printf("menor nota: %.2f\n", n3);
        } else if(n3>n1 && n1>n2){
            printf("maior nota: %.2f\n", n3);
            printf("nota média: %.2f\n", n1);
            printf("menor nota: %.2f\n", n2);
        } else if(n3>n2 && n2>n1){
            printf("maior nota: %.2f\n", n3);
            printf("nota média: %.2f\n", n2);
            printf("menor nota: %.2f\n", n1);
            }   else if(n1>n3 && n3>n2){
                 printf("maior nota: %.2f\n", n1);
                 printf("nota média: %.2f\n", n3);
                 printf("menor nota: %.2f\n", n2);
                } else if(n2>n3 && n3>n1){
                    printf("maior nota: %.2f\n", n2);
                    printf("nota média: %.2f\n", n3);
                    printf("menor nota: %.2f\n", n1);
                    } else {
                        printf("Todas as notas sao iguais: %.f %.f %.f", n1, n2, n3);
                        }
 return 0;
}