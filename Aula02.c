//11.Uma loja vende bicicletas com um acréscimo de 50% sobre o preço de custo. Ela paga a cada vendedor 2 salários mínimos mensais, mais uma comissão de 15%
//sobre o preço de custo de cada bicicleta vendida, dividida igualmente entre eles. Desenvolva um algoritmo que leia o número de empregados da loja, o valor
//do salário mínimo, o preço de custo de cada bicicleta e o número de bicicletas vendidas, calcule e mostre: o salário que cada empregado receberá e o lucro líquido da loja.

#include <stdio.h>
int main()
{
  float sm, pc, nb, f;
  printf("Informe o numero de empregados: ");
  scanf("%f", &f);
  printf("Informe o valor do salário mínimo: ");
  scanf("%f", &sm);
  printf("Informe o preço de custo de cada bicicleta: ");
  scanf("%f", &pc);
  printf("Informe o número de bicicletas vendidas: ");
  scanf("%f", &nb);
  printf("O valor do salario de cada empregado é de %.2f e o lucro líquido da loja é %.2f", ((sm * 2) + (0.15 * (nb * (pc * 0.5 + pc) / f))), (pc * 0.5 + pc) - ((sm * 2) + (0.15 * (nb * (pc * 0.5 + pc) / f))));
  return 0;
}

//12.Um sorteio de uma Ação entre Amigos será realizado entre os números 00000 e 99999.
//Desenvolva um algoritmo para gerar aleatoriamente cada um dos dígitos do número sorteado.

#include <stdlib.h>
#include <conio.h>

int main()
{
  int n1, n2, n3, n4, n5;

  srand(time(NULL));

  n1 = rand() % 9;
  n2 = rand() % 9;
  n3 = rand() % 9;
  n4 = rand() % 9;
  n5 = rand() % 9;

  printf("O 1º gerado é %i%i%i%i%i", n1, n2, n3, n4, n5);

  return 0;
}

//13.Encontre as raízes de uma equação de 2º grau ax2 + bx + c. O algoritmo deverá ler os coeficientes a, b e c
//e calcular as raízes utilizando a fórmula de Báskara:

#include <stdlib.h>
#include <math.h>

int main()
{
  float a, b, c, x1, x2;

  printf("Informe o primeiro, segundo e terceiro numero...");
  scanf("%f%f%f", &a, &b, &c);

  x1 = (-b + sqrt((b * b) - (4 * a * c))) / 2 * a;
  x2 = (-b - sqrt((b * b) - (4 * a * c))) / 2 * a;

  printf("A primeira raiz eh %2.f e a segunda raiz eh %2.f.", x1, x2);

  return 0;
}