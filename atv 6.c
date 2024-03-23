/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float divisor;
    float dividido;
    float quociente;
    
    printf("digite um numero a ser dividido: ");
    scanf("%f", &dividido);
    
    printf("digite um divisor: ");
    scanf("%f", &divisor);
    
    quociente = dividido/divisor;
    
    printf("quociente is: %.2f", quociente);

    return 0;
}
