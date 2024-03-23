/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anos;
    int meses;
    int dias;
    int quantidade_de_dias;
    
    printf("entre com a quantidade de dias: ");
    scanf("%d", &quantidade_de_dias);
    
    anos= quantidade_de_dias/365;
    meses= (quantidade_de_dias%365)/30;
    dias= (quantidade_de_dias%365)%30;
    printf("anos %d, meses %d, dias %d", anos, meses, dias);
    

    return 0;
}
