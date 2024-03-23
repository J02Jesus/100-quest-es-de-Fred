#include <stdio.h>

int main() {
  int p;
  
  scanf("%d", &p);
  
  if(p>=1&&p<=10){ 
  switch(p){
    case 1:
    printf("um");
    break;
    case 2:
    printf("dois");
    break;
    case 3:
    printf("tres");
    break;
    case 4:
    printf("quatro");
    break;
    case 5:
    printf("cinco");
    break;
  case 6:
    printf("seis");
    break;
  case 7:
    printf("sete");
    break;
  case 8:
    printf("oito");
    break;
  case 9:
    printf("nove");
    break;
  case 10:
    printf("dez");
    break;
    default:
     printf("erro");
  }
  }else if(p>10&&p<=21){
  switch(p){
    case 11:
    printf("onze");
    break;
  case 12:
    printf("doze");
    break;
  case 13:
    printf("treze");
    break;
  case 14:
    printf("quartoze");
    break;
    case 15:
    printf("quinze");
    break;
  case 16:
    printf("dezesseis");
    break;
  case 17:
    printf("dezessete");
    break;
  case 18:
    printf("dezoito");
    break;
    case 19:
    printf("dezenove");
    break;
  case 20:
    printf("vinte");
    break;
    default:
     printf("erro");
  }
}else if(p>20&&p<=31){ 
  switch(p){
    case 21:
    printf("vinte e um");
    break;
    case 22:
    printf("vinte e dois");
    break;
    case 23:
    printf("vinte e tres");
    break;
    case 24:
    printf("vinte e quatro");
    break;
    case 25:
    printf("vinte e cinco");
    break;
    case 26:
    printf("vinte e seis");
    break;
    case 27:
    printf("vinte e sete");
    break;
    case 28:
    printf("vinte e oito");
    break;
    case 29:
    printf("vinte e nove");
    break;
    case 30:
    printf("trinta");
    break;
    default:
     printf("erro");
  }
}
else if(p>30&&p<=41){ 
  switch(p){
  case 31:
  printf("trinta e um");
    break;
  case 32:
  printf("trinta e dois");
    break;
  case 33:
  printf("trinta e tres");
    break;
  case 34:
  printf("trinta e quatro");
    break;
  case 35:
  printf("trinta e cinco");
    break;
  case 36:
  printf("trinta e seis");
    break;
  case 37:
  printf("trinta e sete");
    break;
  case 38:
  printf("trinta e oito");
    break;
  case 39:
  printf("trinta e nove");
  break;
  case 40:
  printf("quarenta");
    break;
    default:
     printf("erro");
  }
  }
  else if(p>40&&p<=51){ 
  switch(p){
  case 41:
  printf("quarenta e um");
    break;
  case 42:
  printf("quarenta e dois");
    break;
  case 43:
  printf("quarenta e tres");
    break;
  case 44:
  printf("quarenta e quatro");
    break;
  case 45:
  printf("quarenta e cinco");
    break;
  case 46:
  printf("quarenta e seis");
    break;
  case 47:
  printf("quarenta e sete");
    break;
  case 48:
  printf("quarenta e oito");
    break;
  case 49:
  printf("quarenta e nove");
    break;
  case 50:
    printf("cinquenta");
    break;
    default:
     printf("erro");
  }
}
else if(p>50&&p<=61){ 
    switch(p){
  case 51:
  printf("cinquenta e um");
      break;
  case 52:
  printf("cinquenta e dois");
      break;
  case 53:
  printf("cinquenta e tres");
      break;
  case 54:
  printf("cinquenta e quatro");
      break;
  case 55:
  printf("cinquenta e cinco");
      break;
  case 56:
  printf("cinquenta e seis");
      break;
  case 57:
  printf("cinquenta e sete");
      break;
  case 58:
  printf("cinquenta e oito");
      break;
  case 59:
  printf("cinquenta e nove");
  case 60:
    printf("sessenta");
      break;
      default:
     printf("erro");
    }
}
else if(p>60&&p<=71){ 
  switch(p){
  case 61:
  printf("sessenta e um");
    break;
  case 62:
  printf("sessenta e dois");
    break;
  case 63:
  printf("sessenta e tres");
    break;
  case 64:
  printf("sessenta e quatro");
    break;
  case 65:
  printf("sessenta e cinco");
    break;
  case 66:
  printf("sessenta e seis");
    break;
  case 67:
  printf("sessenta e sete");
    break;
  case 68:
  printf("sessenta e oito");
    break;
  case 69:
  printf("sessenta e nove");
    break;
  case 70:
    printf("setenta");
    break;
    default:
     printf("erro");
  }
}
  else if(p>70&&p<=81){ 
  switch(p){
  case 81:
  printf("oitenta e um");
    break;
  case 82:
  printf("oitenta e dois");
    break;
  case 83:
  printf("oitenta e tres");
    break;
  case 84:
  printf("oitenta e quatro");
    break;
  case 85:
  printf("oitenta e cinco");
    break;
  case 86:
  printf("oitenta e seis");
    break;
  case 87:
  printf("oitenta e sete");
    break;
  case 88:
  printf("oitenta e oito");
    break;
  case 89:
  printf("oitenta e nove");
    break;
  case 90:
    printf("noventa");
    break;
    default:
     printf("erro");
  }
  }
  else if(p>90&&p<=101){ 
   switch(p){
  case 91:
  printf("noventa e um");
     break;
  case 92:
  printf("noventa e dois");
     break;
  case 93:
  printf("noventa e tres");
     break;
  case 94:
  printf("noventa e quatro");
     break;
  case 95:
  printf("noventa e cinco");
     break;
  case 96:
  printf("noventa e seis");
     break;
  case 97:
  printf("noventa e sete");
     break;
  case 98:
  printf("noventa e oito");
     break;
  case 99:
  printf("noventa e nove");
     break;
     default:
     printf("erro");
   }
  }
else if(p==0){
  printf("zero");
  }else{
  printf("cem");
}
getchar;
    return 0;
}