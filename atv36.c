#include <stdio.h>

main(){  
  char A, B, C, R;
  int I,II,III,IV,V;
  char nota;
  
  
  printf("digite valor da tua primeira nota:\n");
  scanf("%d", &I);
  
  printf("digite valor da tua segunda nota:\n");
  scanf("%d", &II);
  
  printf("digite valor da tua terceira nota:\n");
  scanf("%d", &III);
  
  printf("digite valor da tua quarta nota:\n");
  scanf("%d", &IV);
  
  printf("digite valor da tua quinta nota:\n");
  scanf("%d", &V);


  
if(I>=70 && II>=70 && III>=70 && IV>=70&&V>=70){
nota='A';
}
else if(I>=70 && II>=70 &&III<70 && IV>=70 && V>=70){
nota= 'B';
  
}else if(I>=70 && II>=70 && III>=70 && IV>=70 &&V<70){
nota= 'C';
}
else{
nota='R';
}
  switch(nota){
    case 'A':
      printf("nota A");
    break;
    case 'B':
      printf("nota B");
    break;
    case 'C':
    printf("nota C");
    break;
    case 'R':
    printf("reprovado");
    break;
  }
  
  return 0;
  }