#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario;
    printf("Digite o seu salario:\n");
    scanf("%f", &salario);
    if(salario < 2259.00){
        printf("Seu salario e: %.2f", salario);
    }
    else{ if(salario > 2259.00 && salario < 2826.65){
            salario = salario*0.93;
            printf("Seu salario e: %.2f", salario);
        }
        else{ if(salario > 2826.65 && salario < 3751.05){
                salario = salario*0.85;
                printf("Seu salario e: %.2f", salario);
            }
            else{ if (salario > 3751.05 && salario< 4664.68){
                    salario = salario*0.78;
                    printf("Seu salario e: %.2f", salario);
                }
            else{ if(salario > 4664.68){
                      salario = salario*0.73;
                      printf("Seu salario e: %.2f", salario);  
                    }  }}}}     
system("pause");
return 0;
}