#include <stdio.h>

main(){
int modulo, absoluto, absoluto2;

printf("digite um numero: ");
  scanf("%d", &modulo);

  if(modulo==0){
    printf("o numero eh: 0 e o modulo eh 0");
  }
else if(modulo<0){
  (absoluto=modulo*2)+modulo;
  printf("o numero eh: %d, e o modulo do mesmo eh: %d", absoluto, modulo);
}else{
  absoluto2=modulo-(2*modulo);
  printf("o numero eh: %d, e o modulo do mesmo eh: %d", absoluto2, modulo);
   }
}
