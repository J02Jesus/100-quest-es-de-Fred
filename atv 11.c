/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nota1, nota2, media;
    
    printf("digite o valor da primeira nota: ");
    scanf("%d", &nota1);
    
    printf("digite valor da segunda nota");
    scanf("%d", &nota2);
    
    media=(nota1+nota2)/2;

    printf("sua nota eh: %d", media);
    return 0;
}
