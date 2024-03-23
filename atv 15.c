/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float minhaaltura;
   float minhasombra;
   float alturapredio;
   float sombrapredio;
   
   printf("digite sua altura e altura da sombra do predio em metros: ");
   scanf("%f %f", &minhaaltura, &sombrapredio);
   
   minhasombra= minhaaltura*1.73;
   alturapredio=(minhaaltura*sombrapredio)/minhasombra;
   
   printf("altura do predio eh igual a: %f", alturapredio);
   
   
   

    return 0;
}
