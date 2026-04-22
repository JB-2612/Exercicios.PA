#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int horas, min;
    printf("informe a hora e os minutos que o amigo deseja chegar: ");
    scanf("%d", &horas);
    scanf("%d", &min);
    horas--;
    printf("Voce deve chegar as %d:%d\n", horas, min);
    system("pause");

    return 0;
}