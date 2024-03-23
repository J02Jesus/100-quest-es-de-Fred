#include <stdio.h>

main () {
  float preco, litragem;
  char tipocombustivel;
  
  printf("quantos litros foram vendidos?\n");
  scanf("%f", &litragem);

printf("escolha o combustivel: 'a' para alcool e 'g' para gasolina\n");
  scanf("%s", &tipocombustivel)

  
  if(tipocombustivel=='a'){
    if(litragem<=25){
      preco=litragem-(litragem*0.02);
      printf("seu desconto é de %.2f por litro", preco);
    }else{
      preco=litragem-(litragem*0.04);
      printf("seu desconto é de %.2f por litro", preco);
    }
  }
  if(tipocombustivel=='g'){
    if(litragem<=25){
      preco=litragem-(litragem*0.03);
      printf("seu desconto é de %.2f por litro", preco);
    }else{
      preco=litragem-(litragem*0.05);
      printf("seu desconto é de %.2f por litro", preco);
    }
  }
  
  return 0;
}

