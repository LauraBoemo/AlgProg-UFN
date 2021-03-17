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

// 1. Desenvolva um algoritmo para ler o valor da variável x e calcular o resultado da equação:

#include <stdlib.h>
#include <math.h>

int main()
{
  float x;

  printf("Informe um numero...");
  scanf("%f", &x);

  printf("O resultado da questão é %.2f", (pow(x, 2) + (3 * pow(x, x + 1) / 2) + sqrt(x + 1)));

  return 0;
}

// 2. Escreva um algoritmo para ler o valor da variável x e da variável y e calcular o resultado da equação:

#include <stdlib.h>
#include <math.h>

int main()
{
  float x, y;

  printf("Informe dois numeros...\n ");
  scanf("%f%f", &x, &y);

  printf("O resultado da questão é %.2f", sqrt(x * y) + ((x * y) / (2 * x)) + pow(3, 2) - (pow(x, 2) / 3));

  return 0;
}

// 3. Uma revenda de carros paga a seus vendedores um salário fixo de X reais por mês, acrescido de uma
// comissão de Y reais para cada carro vendido e 4% do valor total de suas vendas. Escreva um algoritmo
// que leia o código do vendedor, seu salário, o número de carros que ele vendeu no mês e o valor total de
// suas vendas. O algoritmo deve mostrar o código do vendedor e o seu salário final.

#include <stdlib.h>

int main()
{
  float x, y, a, v, z;

  printf("Informe o salario fixo...\n ");
  scanf("%f", &x);
  printf("Informe quantos carros foram vendidos...\n ");
  scanf("%f", &v);
  printf("Informe a comissão por carro...\n ");
  scanf("%f", &y);
  printf("Informe o valor total dos carros vendidos...\n ");
  scanf("%f", &a);
  printf("Informe o código do vendedor...\n ");
  scanf("%f", &z);

  printf("O código do vendedor é %.2f e seu saláio final é %.2f.", y, (x + (y * v) + (0.4 * a)));

  return 0;
}

// 4. Escreva um algoritmo que leia a matrícula, o valor da hora e o número de horas trabalhadas por um
// empregado. O algoritmo deve escrever a matrícula e o salário líquido do empregado, calculado
// conforme as seguintes regras:
//  o salário bruto mensal é o produto das horas trabalhadas pelo valor da hora;
//  sobre o salário bruto mensal é aplicado um desconto de 9% referente ao INSS;
//  sobre o salário bruto mensal é aplicado um desconto de 8% referente ao FGTS;
//  o salário líquido é o salário bruto mensal menos os encargos (descontos).

#include <stdlib.h>

int main()
{
  float matric, valhor, numhor, salbru, salliq;

  printf("Informe a matricula do empregado...\n ");
  scanf("%f", &matric);
  printf("Informe o valor da hora...\n ");
  scanf("%f", &valhor);
  printf("Informe o numero de horas trabalhadas pelo empregado...\n ");
  scanf("%f", &numhor);

  salbru = valhor * numhor;
  salliq = salbru - (salbru * 0.09) - (salbru * 0.08);

  printf("A matricula do empregado eh %.2f e seu saláio liquido eh %.2f.", matric, salliq);

  return 0;
}

// 5. A comissão de formatura de um curso está organizando a festa de formaturra da sua turma e levantou as
// seguintes informações:
//  custo do salão (capacidade de 800 pessoas, com mesas de 4 pessoas): R$ 2.000,00
//  custo da sonorização: R$ 500,00
//  custo da decoração: R$ 800,00
// Além destes custos, que deverão ser rateados igualmente entre os formandos, há custos cuja divisão é
// proporcional ao número de convidados do formando. São eles:
//  segurança: necessário um segurança para cada 80 pessoas na festa
//  garçom: um garçom consegue atender 48 pessoas
//  bebida
// Escreva um algoritmo que leia a matrícula de cada um dos 5 formandos com seus respectivos números
// de convidados. Ele também deve ler os custos de um segurança, de um garçom e da bebida. O algoritmo
// deve calcular e escrever, para cada formando, o custo da festa para ele.

#include <stdlib.h>

int main()
{
  int totalconv, matricalu1, numconv1, matricalu2, numconv2, matricalu3, numconv3, matricalu4, numconv4, matricalu5, numconv5;
  float totalseg, totalgar, totalbeb, gastogeral, gastopart1, gastopart2, gastopart3, gastopart4, gastopart5, gastoseg, gastogar, gastobeb;

  gastogeral = (2000 + 500 + 800) / 5;

  printf("Informe a Matricula do Aluno 1 e quantos convidados ele levará...\n ");
  scanf("%i \n %i", &matricalu1, &numconv1);
  printf("Informe a Matricula do Aluno 2 e quantos convidados ele levará...\n ");
  scanf("%i \n %i", &matricalu2, &numconv2);
  printf("Informe a Matricula do Aluno 3 e quantos convidados ele levará...\n ");
  scanf("%i \n %i", &matricalu3, &numconv3);
  printf("Informe a Matricula do Aluno 4 e quantos convidados ele levará...\n ");
  scanf("%i \n %i", &matricalu4, &numconv4);
  printf("Informe a Matricula do Aluno 5 e quantos convidados ele levará...\n ");
  scanf("%i \n %i", &matricalu5, &numconv5);
  printf("Informe o gasto com um segurança...\n ");
  scanf("%f", &gastoseg);
  printf("Informe o gasto com um garçom...\n ");
  scanf("%f", &gastogar);
  printf("Informe o gasto com uma bebida...\n ");
  scanf("%f", &gastobeb);

  totalconv = numconv1 + numconv2 + numconv3 + numconv4 + numconv5;
  totalseg = (totalconv / 80) * gastoseg;
  totalgar = (totalconv / 48) * gastogar;
  totalbeb = (totalconv)*gastobeb;

  gastopart1 = gastogeral + ((numconv1 / totalconv) * totalseg) + ((numconv1 / totalconv) * totalgar) + ((numconv1 / totalconv) * totalbeb);
  gastopart2 = gastogeral + ((numconv2 / totalconv) * totalseg) + ((numconv2 / totalconv) * totalgar) + ((numconv2 / totalconv) * totalbeb);
  gastopart3 = gastogeral + ((numconv3 / totalconv) * totalseg) + ((numconv3 / totalconv) * totalgar) + ((numconv3 / totalconv) * totalbeb);
  gastopart4 = gastogeral + ((numconv4 / totalconv) * totalseg) + ((numconv4 / totalconv) * totalgar) + ((numconv4 / totalconv) * totalbeb);
  gastopart5 = gastogeral + ((numconv5 / totalconv) * totalseg) + ((numconv5 / totalconv) * totalgar) + ((numconv5 / totalconv) * totalbeb);

  printf("\n\n O gasto do aluno de matricula %i sera de %.2f.\n", matricalu1, gastopart1);
  printf("O gasto do aluno de matricula %i sera de %.2f.\n", matricalu2, gastopart2);
  printf("O gasto do aluno de matricula %i sera de %.2f.\n", matricalu3, gastopart3);
  printf("O gasto do aluno de matricula %i sera de %.2f.\n", matricalu4, gastopart4);
  printf("O gasto do aluno de matricula %i sera de %.2f.\n", matricalu5, gastopart5);

  return 0;
}