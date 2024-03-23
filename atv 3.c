/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int raio;
    int perimetro;
    int area;
    
    printf("digite valor do raio");
    scanf("%d", &raio);
    
    perimetro= 2*3.14*raio;
    area=3.14*raio*raio;
    
    printf("o perimetro do teu circulo eh: %d e sua area eh: %d", perimetro, area);

    return 0;
}
