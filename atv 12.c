/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float ms, kh;
    
    printf("digite quantos metros por segundo: ");
    scanf("%f", &ms);
    
    kh=ms*3.6;
    printf("resultado da conversao: %.2f", kh);

    return 0;
}
