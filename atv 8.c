/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float fareheit;
    float celsius;
    
    printf("digite o valor em fareheit para celsius");
    scanf("%f", &fareheit);
    
    celsius = (fareheit - 32)*(5.0/9);
    
     printf("%.2f", celsius);
    

    return 0;
}
