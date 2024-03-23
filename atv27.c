#include <stdio.h>

 main() {
 float nota1,nota1peso, nota2, nota2peso, nota3, nota3peso, media; 

   printf("valor das notas 1, 2, 3\n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

   if(nota1>=nota2&&nota1>nota3){
     nota1peso=nota1*5;
     nota2peso=nota2*2.5;
     nota3peso=nota3*2.5;
     media=(nota1+nota2+nota3)/3;
      printf("sua primeira: %.2f, sua segunda: %.2f, sua terceira: %.2f, sua media: %f" ,nota1peso, nota2peso, nota3peso, media);
   }else if(nota2>nota1&&nota2>nota3){
   nota1peso=nota1*2.5;
    nota2peso=nota2*5;
    nota3peso=nota3*2.5;
    media=(nota1+nota2+nota3)/3;
   printf("sua primeira: %.2f, sua segunda: %.2f, sua terceira: %.2f, sua media: %f",nota1peso,nota2peso, nota3peso, media);
   } else {
   nota1peso=nota1*2.5;
   nota2peso=nota2*2.5;
   nota3peso=nota3*5;
   media=(nota1+nota2+nota3)/3;
    printf("sua primeira: %.2f, sua segunda: %.2f, sua terceira: %.2f, sua media: %f" ,nota1peso, nota2peso, nota3peso, media);
   }
   return 0;
}