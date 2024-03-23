/#include <stdio.h>

int main() {  
  int numero, dv11, dv22, dv33, dv44, dv2, dv3, dv4;
  unsigned int soma, digitoverificador, sd;
  
  printf("digito de 4 numeros\n");
  scanf("%d", &numero);

  sd=numero/1000;
  dv2=(numero/100)%10;
  dv3=(numero/10)%10;
  dv4=numero%10;

  dv11=sd*5;
  dv22=dv2*4;
  dv33=dv3*3;
  dv44=dv4*2;

  soma=((((dv11+dv22)+dv33)+dv44)%11)-11;
  if(soma>0){
    soma*=-1;
  }
  
  

  printf("%d\n %d\n %d\n %d\n %d\n", sd, dv2, dv3, dv4, soma);
  
  return 0;
}