/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero,binario, resto1, resto2, resto3, resto4, resto5;
    
    printf("digite um numero de 0 a 32");
    scanf("%d", &numero);
    
    if(numero<0||numero>32){
        printf("numero invalido");
    }else{
    
    resto1=numero%2;
    resto2=(numero/2)%2;
    resto3=(numero/4)%2;
    resto4=(numero/8)%2;
    resto5=(numero/16)%2;
    
    binario= resto5*10000+resto4*1000+resto3*100+resto2*10+resto1;
    
    printf("resultao sa conversao de binario eh: %d", binario);
    return 0;
    }
}
