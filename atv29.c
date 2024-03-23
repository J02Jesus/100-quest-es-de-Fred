#include <stdio.h>

main() {

  float salario, desconto;
  
  printf("digite seu salario\n");
  scanf("%f", &salario);

  desconto=salario*0.11;
 
  if(desconto<=334.29){
     printf("seu desconto eh: %.2f", desconto);
  }else{
     printf("seu desconto eh: 334,29", desconto);
  }
  return 0;
}