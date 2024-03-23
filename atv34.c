#include <stdio.h>

int main() {
  float emprestimo, rendaMensal, prestacao, total;
  int parcelas;

  printf("qual sua renda mensal? \n");
  scanf("%f", &rendaMensal);
  printf("digite a quantidade de parcelas: \n");
  scanf("%d", &parcelas);
  printf("valor do emprestimo: \n");
  scanf("%f", &emprestimo);

  if (emprestimo <= rendaMensal * 10) {
    prestacao = emprestimo / parcelas;
    printf("prestação %.2f \n", prestacao);

    if (prestacao <= rendaMensal * 0.3) {
      printf("emprestimo concedido!\n");
    } else {
      printf("emprestimo negado!\n");
    }
  }

  return 0;
}