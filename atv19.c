/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, c, raiz;
    
    printf("digite valor para a e b");
    scanf("%f %f %f", &a, &b, &c);
    
    raiz=(c-b)/a;
    
    printf("%.2f", raiz);
    
    return 0;
}
