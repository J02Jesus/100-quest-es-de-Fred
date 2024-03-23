/******************************************************************************

W4. Dado os três lados de um triângulo determinar o perímetro do mesmo. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int sucessor;
    int antecessor;
    
    printf("digite valor para numero");
    scanf("%d", &numero);
    
    antecessor=numero-1;
    sucessor=numero+1;
    
    printf("o antecessor eh: %d, o numero eh: %d e seu sucessor eh: %d", antecessor,numero, sucessor);

    return 0;
}
