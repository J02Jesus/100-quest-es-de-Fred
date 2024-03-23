#include <stdio.h>

main() {
  char a, e, i, o, u, letra;
  printf("digite uma letra\n");
  scanf("%c", &letra);
  switch(letra){ 
   case 'a':
  printf("vogal");
    break;
  case 'e':
  printf("vogal");
    break;
  case 'i':
  printf("vogal");
    break;
  case 'o':
  printf("vogal");
    break;
  case 'u':
  printf("vogal");
    break;
    default:
    printf("cosoante");
  };
  
  return 0;
}