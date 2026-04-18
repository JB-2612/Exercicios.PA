#include <stdio.h>
#include <stdlib.h>

int main(){
float peso, altura, imc;
printf("Calculadora de IMC \n");

printf("Informe seu peso em kg: \n");
scanf("%f", &peso);

printf("Informe sua altura em m: \n");
scanf("%f", &altura);

printf("IMC abaixo de 18.5: Abaixo do peso \n");
printf("IMC entre 18.5 e 24.9: Peso normal \n");
printf("IMC entre 25.0 e 29.9: Sobrepeso \n");
printf("IMC acima de 30.0: Obesidade \n");

imc = peso/(pow(altura, 2));

printf("Seu IMC e: %.2f\n", imc);
if(imc<18.5){
    printf("voce esta abaixo do peso ideal \n");
} else if(imc>18.5 && imc<24.9){
    printf("voce esta no peso ideal \n");
} else if(imc>25.0 && imc<29.9){
    printf("voce esta em sobrepeso \n");
} else if(imc>30.0)
printf("voce esta em obesidade \n");

return 0;
}
