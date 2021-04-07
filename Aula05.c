// e o seguinte exercício: utilizando o comando Switch, faça um programa para ler o valor total de uma compra e definir a forma de pagamento, conforme as seguintes opções:
// 1- à vista, com 20% de desconto
// 2 - crédito 30 dias, valor total da compra
// 3 - crédito em até 12 parcelas, valor da compra dividido pela quantidade de parcelas
// Outras opções não estão disponíveis. Mostre a opção escolhida e o valor final da compra realizada.

#include <stdio.h>

int main()
{

  float val;
  int forma, parc;

  printf("\nInsira o valor do pagamento: ");
  scanf("%f", &val);
  printf("Insira a forma de pagamento: ");
  scanf("%i", &forma);

  if (forma == 3)
  {
    printf("Insira a quantidade de parcelas: ");
    scanf("%i", &parc);
  }

  switch (forma)
  {
  case 1:
    printf("\n1- A vista, com 20% de desconto. Valor: %.2f\n", val - (val * 0.20));
    break;
  case 2:
    printf("\n2 - Crédito 30 dias, valor total da compra. Valor: %.2f\n", val);
    break;
  case 3:
    printf("\n3 - Crédito em até 12 parcelas, valor da compra dividido pela quantidade de parcelas. Valor: %.2f\n", val / parc);
    break;
  default:
    printf("\nOpcao invalida.\n");
    break;
  }

  return 0;
}