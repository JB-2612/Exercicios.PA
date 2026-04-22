#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   double a, b, c;
   double raiz1, raiz2, delta;
   printf("informe o coeficente a: ");
   scanf("%lf", &a);
   printf("informe o coeficente b: ");
   scanf("%lf", &b);
   printf("informe o coeficente c: ");
   scanf("%lf", &c);
   delta = pow(b, 2.0)-(4.0*a*c);
   raiz1 = (-b + sqrt(delta))/(2.0*a);
   raiz2 = (-b - sqrt(delta))/(2.0*a);
   if (delta>0){
        printf("Existem duas raizes reais e diferentes, a raiz positiva e/sao: \n");
        if(raiz1>0){
            printf("%lf\n", raiz1);
        }
        if(raiz2>0){
            printf("%lf\n", raiz2);
        }}
    else if(delta==0){
        printf("Existe uma raiz real repetida: %lf\n", raiz1);
    }
        else {
            printf("Nao existem raizes reais para essa equaçao.\n");
        }
    system("pause");
    return 0;
}
