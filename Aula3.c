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

  int va1, va2, vl1, vl2;
  printf("O primeiro valor: ");
  scanf("%i", &v1);
  printf("O segundo valor: ");
  scanf("%i", &v2);
  if (v1 % v2 == 1)
  {
    printf("%i", v1 + v2 + 1);
  }
  else if (v1 % v2 == 2)
  {
    if (v1 % 2 == 0)
    {
      printf("A primeira variavel eh par!\n");
    }
    else
    {
      printf("A primeira variavel eh impar!\n");
    }
    if (v2 % 2 == 0)
    {
      printf("A segunda variavel eh par!\n");
    }
    else
    {
      printf("A segunda variavel eh impar!\n");
    }
  }
  else if (v1 % v2 == 3)
  {
    printf("%i", v1 * 3);
  }
  else if (v1 % v2 == 3)
  {
    printf("%i", v1 * 3);
  }
  else
  {
    printf("O voto eh obrigatorio!");
  }
  return 0;
}
