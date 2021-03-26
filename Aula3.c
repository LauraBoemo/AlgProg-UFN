// Exercícios Slides

// 1
#include <stdio.h>

int main()
{
  float v1, v2;

  printf("Informe o Primeiro Valor: ");
  scanf("%f", &v1);

  printf("Informe o Segundo Valor: ");
  scanf("%f", &v2);

  if (v1 > v2)
  {
    printf("O Primeiro Valor %.2f eh maior que o Segundo Valor %.2f", v1, v2);
  }
  else
  {
    printf("O Segundo Valor %.2f eh maior que o Primeiro Valor %.2f", v2, v1);
  };

  return 0;
}

// 2
#include <stdio.h>

int main()
{

  int v1, v2;
  printf("Informe o Primeiro Valor: ");
  scanf("%i", &v1);
  printf("Informe o Segundo Valor: ");
  scanf("%i", &v2);
  if (v1 > v2)
  {
    printf("%.i", v1 - v2);
  }
  else
  {
    printf("%.i", v2 - v1);
  };

  return 0;
}

// 3
#include <stdio.h>

int main()
{
  float m, t1, t2, t3;

  printf("Informe a Primeira Nota: ");
  scanf("%f", &t1);

  printf("Informe a Segunda Nota: ");
  scanf("%f", &t2);

  printf("Informe a Terceira Nota: ");
  scanf("%f", &t3);

  m = (t1 + t2 + t3) / 3;

  if (m >= 6)
  {
    printf("A media do aluno eh de %.2f e ele esta aprovado!", m);
  }
  else
  {
    printf("A media do aluno eh de %.2f e ele esta reprovado!", m);
  };

  return 0;
}

// Exercícios Moodle

// 1. Escreva um algoritmo para ler três valores inteiros e escrever na tela o maior deles. Considere
// que todos os valores são diferentes.
#include <stdio.h>

int main()
{

  int v1, v2, v3;
  printf("Informe o Primeiro Valor: ");
  scanf("%i", &v1);
  printf("Informe o Segundo Valor: ");
  scanf("%i", &v2);
  printf("Informe o Terceiro Valor: ");
  scanf("%i", &v3);
  if (v1 > v2)
  {
    if (v1 > v3)
    {
      printf("%i", v1);
    }
    else
    {
      printf("%i", v3);
    }
  }
  else
  {
    if (v2 > v3)
    {
      printf("%i", v2);
    }
    else
    {
      printf("%i", v3);
    }
  }
  return 0;
}

// 2. Desenvolva um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na
// tela os que são superiores à média.
#include <stdio.h>

int main()
{

  int m, v1, v2, v3, v4;
  printf("Informe o Primeiro Valor: ");
  scanf("%i", &v1);
  printf("Informe o Segundo Valor: ");
  scanf("%i", &v2);
  printf("Informe o Terceiro Valor: ");
  scanf("%i", &v3);
  printf("Informe o Quarto Valor: ");
  scanf("%i", &v3);
  m = (v1 + v2 + v3 + v4) / 4;
  if (v1 > m)
  {
    printf("%i", v1);
  }
  if (v2 > m)
  {
    printf("%i", v2);
  }
  if (v3 > m)
  {
    printf("%i", v3);
  }
  if (v4 > m)
  {
    printf("%i", v4);
  }
  return 0;
}

// 3. Escreva um algoritmo para ler a quantidade de horas aula trabalhadas por dois professores e o
// valor por hora recebido por cada um deles. Mostrar na tela qual dos professores tem o maior
// salário total.
#include <stdio.h>

int main()
{

  float h1, h2, vh1, vh2, s1, s2;
  printf("Informe o total de horas trabalhadas pelo primeiro professor: ");
  scanf("%f", &h1);
  printf("Informe o valor por hora recebido pelo primeiro professor: ");
  scanf("%f", &vh1);
  printf("Informe o total de horas trabalhadas pelo segundo professor: ");
  scanf("%f", &h2);
  printf("Informe o valor por hora recebido pelo segundo professor: ");
  scanf("%f", &vh2);
  s1 = h1 * vh1;
  s2 = h2 * vh2;
  if (s1 > s2)
  {
    printf("O Primeiro professor contem o maior salario total.");
  }
  else if (s1 > s2)
  {
    printf("O Segundo professor contem o maior salario total.");
  }
  else
  {
    printf("Os professores contem os mesmos salarios totais.");
  }

  return 0;
}

// 4. Escreva um algoritmo para ler dois valores e uma das seguintes operações a serem executadas
// (codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão).
// Calcular e escrever o resultado dessa operação sobre os dois valores lidos.
#include <stdio.h>

int main()
{

  int oper, v1, v2;
  printf("Informe o Primeiro Valor: ");
  scanf("%i", &v1);
  printf("Informe o Segundo Valor: ");
  scanf("%i", &v2);
  printf("Informe a codificacao da operacao: \n(1 p Adicao, 2 p Subtracao, 3 p Multiplicacao e 4 p Divisao)\n");
  scanf("%i", &oper);
  if (oper == 1)
  {
    printf("%i", v1 + v2);
  }
  else if (oper == 2)
  {
    printf("%i", v1 - v2);
  }
  else if (oper == 3)
  {
    printf("%i", v1 * v2);
  }
  else if (oper == 4)
  {
    printf("%i", v1 / v2);
  }
  else
  {
    printf("O valor operacional informado nao eh valido!");
  }
  return 0;
}

// 5. Escreva um algoritmo para ler a idade de uma pessoa e mostrar qual sua situação de eleitor,
// conforme as seguintes condições: se a idade for menor que 16 anos, informar que a pessoa
// não está apta a votar. Se a idade for maior ou igual a 16 anos e menor que 18 anos ou
// superior a 70 anos, informar que o voto é facultativo. Caso contrário, informar que o voto é
// obrigatório.
#include <stdio.h>

int main()
{

  int idade;
  printf("Informe a sua idade: ");
  scanf("%i", &idade);
  if (idade < 16)
  {
    printf("Voce nao esta apto ao voto!");
  }
  else if (idade <= 16 && 18 > idade || idade > 70)
  {
    printf("O voto eh optativo!");
  }
  else
  {
    printf("O voto eh obrigatorio!");
  }
  return 0;
}

// 6. Desenvolva um algoritmo que leia valores inteiros em duas variáveis distintas e faça o
// seguinte:
//  se o resto da divisão da primeira variável pela segunda for 1, mostre a soma dessas
// variáveis mais o resto da divisão;
//  se o resto desta divisão for 2, escreva se os valores das variáveis são pares ou ímpares;
//  se o resto desta divisão for igual a 3, multiplique a soma dos valores lidos pelo
// primeiro valor;
//  se for igual a 4 divida a soma dos números lidos pelo segundo valor, se o segundo
// valor for diferente de zero.
//  Em qualquer outra situação mostre o quadrado dos números lidos.
#include <stdio.h>

int main()
{

  int va1, va2, vl11, vl12, vl21, vl22;

  printf("O primeiro valor da Primeira variavel: ");
  scanf("%i", &vl11);
  printf("O segundo valor da Primeira variavel: ");
  scanf("%i", &vl12);
  printf("O primeiro valor da Segunda variavel: ");
  scanf("%i", &vl21);
  printf("O segundo valor da Segunda variavel: ");
  scanf("%i", &vl22);

  va1 = vl11 + vl12;
  va2 = vl21 + vl22;

  if (va1 % va2 == 1)
  {
    printf("%i", va1 + va2 + 1);
  }
  else if (va1 % va2 == 2)
  {
    if (vl11 % 2 == 0)
    {
      printf("O primeiro valor da Primeira variavel eh par!");
    }
    else
    {
      printf("O primeiro valor da Primeira variavel eh impar!");
    }
    if (vl12 % 2 == 0)
    {
      printf("O segundo valor da Primeira variavel eh par!");
    }
    else
    {
      printf("O segundo valor da Primeira variavel eh impar!");
    }
    if (vl21 % 2 == 0)
    {
      printf("O primeiro valor da Segunda variavel eh par!");
    }
    else
    {
      printf("O primeiro valor da Segunda variavel eh impar!");
    }
    if (vl22 % 2 == 0)
    {
      printf("O segundo valor da Segunda variavel eh par!");
    }
    else
    {
      printf("O segundo valor da egunda variavel eh impar!");
    }
  }
  else if (va1 % va2 == 3)
  {
    printf("%i", (vl11 + vl12 + vl21 + vl22) * vl11);
  }
  else if (va1 % va2 == 4)
  {
    if (vl12 != 0)
    {
      printf("%i", (vl11 + vl12 + vl21 + vl22) / vl12);
    }
  }
  else
  {
    printf("%i %i", va1 * va1, va2 * va2);
  }
  return 0;
}

// 7. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
// dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela
// unidade, e outro pelo milhar e pela centena, se somarmos estes dois novos números gerando
// um terceiro, o quadrado deste terceiro número é exatamente o número original de quatro
// dígitos. Por exemplo:
// 2025 -> dividindo: 20 e 25 -> somando 20 e 25 tem-se 45  452= 2025.
// Escreva um programa para ler um número e verificar se ele obedece a esta característica.

