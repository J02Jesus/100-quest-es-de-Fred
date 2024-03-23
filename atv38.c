#include <stdio.h>

int main(){
  
  int ano;

  printf("digite o numero do ano\n");
  scanf("%d", &ano);

  if(ano%400==0){
    printf("ano %d bissexto",  ano);
  getchar();
  }else if(ano%100==0){ 
    printf("nao eh %d bissexto nao", ano);
  getchar();  
  }else if(ano%4==0){ 
    printf("eh %d bissexto", ano);
    getchar();
  }else{
    printf("ano %d nao bissexto", ano);
    getchar();
  }

}