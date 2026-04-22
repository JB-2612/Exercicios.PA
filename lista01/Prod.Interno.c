#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    int x[2];
    int y[2];
    int z[2];
for(i = 0; i < 2; i++)
{printf("digite as coordenadas do vetor%d em r3: \n", i+1);

printf("x: \n");
scanf("%d", &x[i]);

printf("y: \n");
scanf("%d", &y[i]);

printf("z: \n");
scanf("%d", &z[i]);
}
int xf, yf, zf;
float resultado;
xf = x[0] * x[1];
yf = y[0] * y[1];
zf = z[0] * z[1];

resultado = xf+yf+zf;

printf("O produto interno dos vetores v1 e v2 e: %.2f \n", resultado);

system("pause");
return 0;
}
