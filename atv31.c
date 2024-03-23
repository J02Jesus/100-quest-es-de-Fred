#include <stdio.h>

main() {
float qrating;
float passes, passestentados, touchdown, passestouchdown;
float passesinterceptados, rinte;
float jardas,totaljardas, totalpasses, razaodetouch;

  
  printf("numero de passes tentados:\n");
  scanf("%f", &passestentados);
  printf("passes bem sucedidos:\n");
  scanf("%f", &passes);
  printf("numero de jardas passadas:\n");
  scanf("%f", &jardas);
  printf("numero de passes para touchdown:\n");
  scanf("%f", &passestouchdown);
  printf("numero de passes interceptados:\n");
  scanf("%f", &passesinterceptados);

  totalpasses=((passes/passestentados)-0.3)/0.2;
  if(passes>2.375){
  totalpasses = 2.375;
  }else if(passes<0){
   totalpasses=0; 
  }else{ 
  printf("passes: %f\n", totalpasses);
  }

  totaljardas=(((jardas/passestentados))-3)/4;
  
  if(jardas>2.375){
    totaljardas=2.375;
  }else if(jardas<0){ 
    totaljardas=0;
  }else{ 
printf("a razao de jardas eh: %f\n", jardas);
}
  razaodetouch=((passestouchdown/passestentados)/0.05);
  
    if(touchdown>2.375){
    razaodetouch=2.375;
    }else if(touchdown<0){ 
    razaodetouch=0;
  }else{ 
 printf("razao de touch: %f\n", touchdown);
    }
  rinte=(((passesinterceptados/passestentados)-0.095)/0.04);
  if(rinte>2.375){
   rinte=2.375;
    }else if(rinte<0){ 
    rinte=0;
  }else{ 
  printf("razao de interceptados eh: %f\n", rinte);
  }
  

  qrating=((totalpasses+totaljardas+razaodetouch+rinte)*100)/6;

  printf("pontuação de quarteback eh: %.2f\n", qrating);
  return 0;
}