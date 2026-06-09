#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *ori, *impar, *par;
struct Dados {
    int ID;
    char x[10];
    char y[10];
};
int i, imp, p, quant;
int main(){
    struct Dados d[7];
    imp = 0, p = 0, quant = 0;

    ori = fopen("original.txt", "rb");
    if (ori == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    impar = fopen("impar.txt", "wb");
    par = fopen ("par.txt", "wb");
    quant = fread(d, sizeof(struct Dados), 7, ori);
    
    for (int i = 0; i < quant; i++) {
        if (d[i].ID % 2 == 0) {
            fwrite(&d, sizeof(struct Dados), 1, par);
            p++;
        } else {
            fwrite(&d, sizeof(struct Dados), 1, impar);
            imp++;
        }
    } 


    printf("A quantidade de registros no arqv original e linhas: %d e %d\n", quant, quant*3);
    printf("A quantidade de registros no arqv par e linhas: %d e %d\n", p, p*3);
    printf("A quantidade de registros no arqv impar e linhas: %d e %d\n", imp, imp*3);

    fclose(ori);
    fclose(impar);
    fclose(par);
    return 0;
}