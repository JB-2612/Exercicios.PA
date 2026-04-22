#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float c, f;
    printf("Insira a temperatura informada em Fahrenheit: ");
    scanf("%f", &f);
    c = (5/9)*(f - 32);
    printf("A temperatura em Celsius e: %.2f C\n", c);
    system("pause");
    return 0;
}