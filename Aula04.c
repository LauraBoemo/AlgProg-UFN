// 1. Escrever um algoritmo que efetue as operações de uma calculadora com 4 operações. O
// algoritmo lê o primeiro operando, a operação ( ‘+’, ‘-’, ‘*’ e ‘/’) e o operando. O algoritmo deve
// escrever na tela:
// 1º operando operação 2º operando = resultado
// Por exemplo, se forem lidos os valores 2 * 5, o algoritmo deverá escrever:
// 2*5 = 10

#include <stdio.h>
#include <string.h>

int main()
{

  int f1, f2;
  char o[2];
  scanf("%i %s %i", &f1, &o, &f2);
  if (strcmp(o, "+") == 0)
  {
    printf("%i + %i = %i", f1, f2, f1 + f2);
  }
  else if (strcmp(o, "-") == 0)
  {
    printf("%i - %i = %i", f1, f2, f1 - f2);
  }
  else if (strcmp(o, "*") == 0)
  {
    printf("%i * %i = %i", f1, f2, f1 * f2);
  }
  else if (strcmp(o, "/") == 0)
  {
    printf("%i / %i = %i", f1, f2, f1 / f2);
  }
  else
  {
    printf("Informe uma operação válida!");
  }
  return 0;
}

// 2. Escreva um algoritmo que leia a altura (em metros), o peso (em quilogramas) e o sexo
// (M ou F) e calcule o peso ideal, dado por:
// Peso ideal do homem = (72,7 * altura) – 58
// Peso ideal da mulher = (62,1 * altura) – 44, 7.
// O algoritmo deve informar também se a pessoa está abaixo ou acima de seu peso ideal e em
// quantos quilos.

#include <stdio.h>
#include <string.h>

int main()
{

  float a, p, i;
  char s[2];
  printf("Informe sua altura (metros): ");
  scanf("%f", &a);
  printf("Informe seu peso (quilogramas): ");
  scanf("%f", &p);
  printf("Informe seu sexo (M ou F): ");
  scanf("%s", &s);
  if (strcmp(s, "F") == 0 || strcmp(s, "f") == 0)
  {
    i = (62.1 * a) - 44.7;
  }
  else if (strcmp(s, "M") == 0 || strcmp(s, "m") == 0)
  {
    i = (72.7 * a) - 44.7;
  }
  if (p > i)
  {
    printf("Você esta acima do peso ideal!");
  }
  else if (p < i)
  {
    printf("Você esta abaixo do ideal!");
  }
  else
  {
    printf("Você esta com o peso ideal!");
  }
  return 0;
}

// 3. Escreva um algoritmo que lê três valores para os lados de um triângulo (cada lado do
// triângulo deve ser menor que a soma dos outros dois lados). O programa deve verificar se os lados
// fornecidos formam realmente um triângulo, e caso esta condição seja verdadeira, se o triângulo é
// equilátero (todos lados iguais), isósceles (dois lados iguais) ou escaleno (todos lados diferentes)

#include <stdio.h>

int main()
{

  int l1, l2, l3;
  printf("Informe o primeiro lado: ");
  scanf("%i", &l1);
  printf("Informe o segundo lado: ");
  scanf("%i", &l2);
  printf("Informe o terceiro lado: ");
  scanf("%i", &l3);
  if (l1 <= l2 + l3 && l2 <= l1 + l3 && l3 <= l1 + l2)
  {
    if (l1 == l2 && l2 == l3)
    {
      printf("O triângulo é equilátero!");
    }
    else if (l1 == l2 || l2 == l3 || l1 == l3)
    {
      printf("O triângulo é isósceles!");
    }
    else
    {
      printf("O triângulo é escaleno!");
    }
  }
  else
  {
    printf("Informe um lados válidos!");
  }
  return 0;
}

// 4. Faça um programa leia o salário mensal de um funcionário e calcule o desconto do INSS,
// conforme as alíquotas da tabela:
// O algoritmo deverá apresentar como resultado o salário mensal do funcionário, o percentual de
// desconto do INSS e o valor em Reais do desconto do INSS e o salário líquido (salário mensal
// menos o valor do INSS).

#include <stdio.h>

int main()
{

  float s, a;
  printf("Informe o salário do funcionário: ");
  scanf("%f", &s);
  if (s <= 965.67)
  {
    a = 8;
  }
  else if (s >= 965.68 && s <= 1609.45)
  {
    a = 9;
  }
  else if (s >= 1609.46 && s <= 3218.90)
  {
    a = 11;
  }
  printf("O salario mensal do funcionario eh %2.f \nO percentual de desconto do INSS eh %2.f \nO salario liquido do funcionario eh %2.f.", s, a, s - (s * (a / 100)));
  return 0;
}

// 5. Considere a tabela de Alíquota de Imposto de Renda (IR) a seguir. Desenvolva um
// algoritmo para ler um valor de salário mensal, mostrar o % da alíquota do imposto de Renda e o
// valor em R$ da alíquota.

#include <stdio.h>

int main()
{

  float s, a;
  printf("Informe o salário do funcionário: ");
  scanf("%f", &s);
  if (s <= 1566.61)
  {
    a = 0;
  }
  else if (s >= 1566.62 && s <= 2347.85)
  {
    a = 7.5;
  }
  else if (s >= 2347.86 && s <= 3130.51)
  {
    a = 15;
  }
  else if (s >= 3130.52 && s <= 3911.63)
  {
    a = 22.5;
  }
  else if (s >= 3911.64)
  {
    a = 27.5;
  }
  printf("O percentual da aliquota eh %2.f \nO valor em R$ da aliquota eh %2.f.", a, (s * (a / 100)));
  return 0;
}

// 6. Escreva um algoritmo que leia o número de inscrição de um nadador, sua idade e sexo (F
// ou M). O algoritmo deve escrever a categoria do nadador, conforme a tabela:

#include <stdio.h>
#include <string.h>

int main()
{

  int i;
  char s[2];
  printf("Informe sua idade: ");
  scanf("%i", &i);
  if (i >= 6 && i <= 8)
  {
    printf("Informe seu sexo (M ou F): ");
    scanf("%s", &s);
    if (strcmp(s, "F") == 0 || strcmp(s, "f") == 0)
    {
      printf("Você está na categoria Infantil A-F!");
    }
    else if (strcmp(s, "M") == 0 || strcmp(s, "m") == 0)
    {
      printf("Você está na categoria Infantil A-M!");
    }
  }
  else if (i >= 9 && i <= 11)
  {
    printf("Você está na categoria Infantil B!");
  }
  else if (i >= 11 && i <= 14)
  {
    printf("Você está na categoria Infantil A!");
  }

  return 0;
}

// 7. Escreva um algoritmo que leia duas datas, na forma dia, mês e ano e informe qual é a mais
// recente.

#include <stdio.h>

int main()
{
  int dia1, ano1, mes1, dia2, ano2, mes2;

  printf("Informe a primeira data: ");
  scanf("%i.%i.%i", &dia1, &mes1, &ano1);
  printf("Informe a segunda data: ");
  scanf("%i.%i.%i", &dia2, &mes2, &ano2);

  if (ano1 < ano2)
  {
    printf("A segunda data é maior que a primeira!\n");
  }
  else if (ano2 < ano1)
  {
    printf("A primeira data é maior que a segunda!\n");
  }
  else if (ano1 == ano2)
  {
    if (mes1 > mes2)
    {
      printf("A primeira data é maior que a segunda!\n");
    }
    else if (mes2 > mes1)
    {
      printf("A segunda data é maior que a primeira!\n");
    }
    else if (mes1 == mes2)
    {
      if (dia1 > dia2)
      {
        printf("A primeira data é maior que a segunda!\n");
      }
      else if (dia2 > dia1)
      {
        printf("A segunda data é maior que a primeira!\n");
      }
      else if (dia1 == dia2)
      {
        printf("As datas são iguais!\n");
      }
    }
  }
  return 0;
}