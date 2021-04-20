// 3. Ler um número, calcular e mostrar a tabuada de um número lido.

#include <stdio.h>

int main()
{

  float num;

  printf("\nInsira um numero: ");
  scanf("%f", &num);

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