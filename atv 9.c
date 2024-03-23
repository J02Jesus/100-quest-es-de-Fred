/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int raio;
    int volume;
    int altura;
    
    printf("digite um valor para o raio");
    scanf("%d", &raio);
    printf("digite o valor para a altura");
    scanf("%d", &altura);
    
    volume= 3.14*(raio*raio)*altura;
    
    printf("%d", volume);

    return 0;
}
