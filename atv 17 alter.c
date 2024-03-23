/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    int saque;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Digite o valor para saque: ");
    scanf("%d", &saque);

    notas100 = saque / 100;
    saque -= notas100 * 100;

    notas50 = saque / 50;
    saque -= notas50 * 50;

    notas20 = saque / 20;
    saque -= notas20 * 20;

    notas10 = saque / 10;
    saque -= notas10 * 10;

    notas5 = saque / 5;
    saque -= notas5 * 5;

    notas2 = saque / 2;
    saque -= notas2 * 2;

    notas1 = saque;

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}