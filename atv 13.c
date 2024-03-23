/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float r1, r2, r3, paralela, total;
    
    printf("digite os tres valores de resistencias: ");
    scanf("%f %f %f", &r1, &r2, &r3);
    
    paralela= (r1*r2)/(r1+r2);
    
    total= paralela+r3;
    printf("resultado: %f", total);
    return 0;
}
