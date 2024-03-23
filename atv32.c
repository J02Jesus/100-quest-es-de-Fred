#include <stdio.h>
main(){
  char caractere;

  printf("digite caractere");
  scanf("%c", &caractere);

  if(caractere=='a'||caractere=='e'||caractere=='i'||caractere=='o'||caractere=='u'){
    printf("eh vogal");
  }else if(caractere=='b'||caractere=='c'||caractere=='d'||caractere=='f'||caractere=='g'||caractere=='h'||caractere=='j'||caractere=='k'||caractere=='l'||caractere=='m'||caractere=='n'||caractere=='p'||caractere=='q'||caractere=='r'||caractere=='s'||caractere=='t'||caractere=='u'||caractere=='v'||caractere=='w'||caractere=='x'||caractere=='y'||caractere=='z'){
    printf("cosoante");
  }else if(caractere>='0'&&caractere<='9'){
    printf("eh numero");
  }else{
    printf("eh simbolo");
  }
  
  return 0;
}