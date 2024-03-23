
#include <stdio.h>

main(){

  int x, resultadox;
  int xinferior, xsuperior;
  int y;
  int yinferior, ysuperior;
  char esquerda_superior, esquerda_inferior;
  char direita_superior, direita_inferior;
  char direita, esquerda;
  char cima, baixo;
  
  printf("digite valor de X:\n");
  scanf("%d", &x);
    printf("digite valor de Y:\n");
    scanf("%d", &y);
    
    if(x>0){
    direita=x;
    }else if(x<0){
      esquerda=x;
    };
  if(y<0){
    baixo=y;
  }else if(y>0){
    cima=y;
  };

  if(cima && esquerda){
    printf("segundo quadrante");
  }else if(cima && direita){
    printf("primeiro quadrante");
  }else if(baixo &&esquerda){
    printf("terceiro quadrante");
  }else{
    printf("quarto quadrante");
  }
  
  
    
    
    return 0;
    
}