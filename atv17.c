/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

int res, res2, res3, res4, res5, res6,res7;
int resto1, resto2, resto3, resto4, resto5, resto6, resto7;
int saque;
int recebido;

printf("digite valor para saque");
scanf("%d", &saque);



res= saque/100;
resto1= saque%100;
res2= resto1/50;
resto2= resto1%50;
res3= resto2/20;
resto3= resto2%20;
res4= resto3/10;
resto4= resto3%10;
res5= resto4/5;
resto5= resto4%5;
res6= resto5/2;
resto6= resto5%2;
res7= resto6/1;



printf("nota de 100:%d\n", res);
printf("nota de 50:%d\n", res2);
printf("nota de 20:%d\n", res3);
printf("nota de 10:%d\n", res4);
printf("nota de 5::%d\n", res5);
printf("nota de 2:%d\n", res6);
printf("nota de 1:%d\n", res7);
}