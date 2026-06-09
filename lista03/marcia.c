#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct forn
{
char nome[100];
int num;
char email[100];
};

int main(){
    int i=0;
    char name[100];
    struct forn fornecedor[3];
    for(i=0;i<3;i++){
    printf("Insira o nome do fornecedor: ");
    scanf("%s", fornecedor[i].nome);
    printf("Insira o numero do fornecedor: ");
    scanf("%d", &fornecedor[i].num);
    printf("Insira o email do fornecedor: ");
    scanf("%s", fornecedor[i].email);
    }

    printf("Insira o fornecedor que deseja consultar: \n");
    scanf("%s", name);
    for(i=0;i<3;i++){
    if(strcmp(fornecedor[i].nome, name) == 0){
        printf("Nome: %s\n", fornecedor[i].nome);
        printf("Email: %s\n", fornecedor[i].email);
        printf("Numero: %d", fornecedor[i].num);}
    }











    return 0;
}