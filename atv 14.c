/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int distancia;
    int velocidademax;
    int velocidade, aceleração, tempo, verde;
    
    printf("digite a velocidade");
    scanf("%d", &velocidade);
    
    distancia= 100;
    velocidademax= 80;
    
    if (velocidade>80){
        printf("aplicar multa");
    }else{
        tempo= distancia/velocidade;
        printf("100km em %d por hora randandandnadandandan", tempo);
        
        if(tempo>3){
            verde= tempo-4;
            printf("o proximo verde eh em %d", verde);
        }
    }

    return 0;
}
