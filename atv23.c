#include <stdio.h>

main(){

int numero;

printf("digite um inteiro: ");
  scanf("%d", &numero);

  if(numero % 2 == 0){
    printf("o numero %d eh par", numero);
  }else{
    printf("o numero %d eh impar", numero);
  }
}