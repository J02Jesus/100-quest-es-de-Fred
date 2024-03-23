/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int numero, resto1, resto2, resto3, invertido;
   
   printf("digite um numero de tres algarismos");
   scanf("%d", &numero);
   
    resto1=(numero/100)%10;
    
    resto2=(numero/10)%10;
    
    resto3=(numero/1)%10;
    
    printf("o resutado de %d invertido eh: %d %d %d", numero, resto3, resto2, resto1);
    
    return 0;
}
