

#include <stdio.h>

main(){
int a, b, c;
int soma;
  
  printf("digite valor de a, b e c\n");
  scanf("%d %d %d", &a, &b, &c);

  if(a<=b && a<=c){
    soma= b+c;
    printf("a soma dos maiores eh: %d", soma);
  }else if(b<=a && b<=c){
    soma=a+c;
     printf("a soma dos maiores eh: %d", soma);
  }else{
    soma=a+b;
     printf("a soma dos maiores eh: %d", soma);
  }
  return 0;

  
}
}