#include <stdio.h>
#include <stdlib.h>
int main (){


// Pegar a Data Atual - Data de Nascimento (em anos).
int dia_atual = 12;
int mes_atual = 4;
int ano_atual = 2026;
int dia, mes, ano;
printf("Digite o dia: ");
scanf("%d", &dia);
printf("Digite o mes: ");
scanf("%d", &mes);
printf("Digite o ano de nascimento: ");
scanf("%d", &ano);
int idade = ano_atual - ano;
if (mes_atual <= mes && dia_atual < dia)
    idade--;
printf("%d\n", idade);
int dife_dias = abs(dia_atual - dia);
int dife_mes = abs(mes_atual - mes)*30;
int dias_vividos = dife_dias + dife_mes + idade*365;
printf("Voce viveu %d dias na Terra", dias_vividos);




return 0;
}
