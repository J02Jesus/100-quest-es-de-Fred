#include <stdio.h>

main(){
float valor;
int parcela;
float entrada;

printf("digite um valor");
scanf("%f", &valor);

parcela = valor/3;

entrada = (((valor/3)- parcela)*3)+parcela;

printf("valor de entrada %f", entrada);

printf("valor das parcelas %d", parcela);


}