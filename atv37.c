#include <stdio.h>

  int main() {
  int acres;
  char pulv;
  float desconto;
  float total;

    printf("digite o tipo de pulverizacao: a :ervas daninhas, b :gafanhotos, c :broca, d :todos\n");
    scanf("%c", &pulv);
  printf("digite a quantidade de terreno em acres:\n");
  scanf("%d", &acres);
    
  

  switch(pulv){
    case 'a':
      total= 50*acres;
      break;
    case 'b':
      total=100*acres;
      break;
    case 'c':
      total=150*acres;
    break;
    case 'd':
      total=(50+100+150)*acres;
    break;
    default:
    printf("mal pulverizado");
  }
    if(acres>1000){
      desconto=total*0.05;
      total=total-desconto;
      if(total>750){
        desconto=total*0.1;
        total=total-desconto;
      }
    }
    printf("Valor total a ser pago: %.2f\n", total);
  return 0;
    }