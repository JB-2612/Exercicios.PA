#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[50], temp;
int i, v, c, count, j;
int vogais(char n[]) {
    v = 0;
    for (int i = 0; i < strlen(n); i++){
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u'){
            v++;
        }
    }
    return v;
}
int consoantes(char n[]) {
    c = 0;
    for (int i = 0; i < strlen(n); i++){
        if(n[i] >= 'a' && n[i] <= 'z'){
            if (n[i] != 'a' && n[i] != 'e' && n[i] != 'i' && n[i] != 'o' && n[i] != 'u')
                c++;
        }
    }
    return c;
}
int contar(char n[]){
    count = 1;
    for (i = 0; i < strlen(n); i++){
        if (n[i] == ' ')
            count++;
    }
    return count;
}
void inverter(char n[]){
    j = strlen(n)-1;
    for(i = 0; i< j; i++){
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        j--;
    }
}
int main (){
    printf("Digite a palavra sem letra maiuscula: ");
    gets(palavra);
    printf("Palavra digitada: %s\n", palavra);
    printf("Quantas vogais: %d\n", vogais(palavra));
    printf("Quantas consoantes: %d\n", consoantes(palavra));
    printf("Quantas palavras: %d\n", contar(palavra));
    inverter(palavra);
    printf("Palavra invertida: %s", palavra);

    return 0;
}