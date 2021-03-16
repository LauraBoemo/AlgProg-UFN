// 1. Desenvolva um algoritmo para ler as medidas de uma caixa, calcular e mostrar o seu volume.
#include <stdio.h>
int main()
{
  float lad, alt, lar;
  printf("Informe o lado da caixa: ");
  scanf("%f", &lad);
  printf("Informe a altura da caixa: ");
  scanf("%f", &alt);
  printf("Informe a larruda da caixa: ");
  scanf("%f", &lar);
  printf("O valor do volume da caixa eh de %.2f", (lad * alt * lar));
  return 0;
}

// 2. Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. O algoritmo deve calcular o novo salário e exibi-lo.
#include <stdio.h>
int main()
{
  float s, r;
  printf("Informe o salario atual: ");
  scanf("%f", &s);
  printf("Informe a porcentagem do reajuste: ");
  scanf("%f", &r);
  printf("O valor do salario reajustado eh de %.2f", (s * r * 0.01) + s);
  return 0;
}

// 3. Converta a temperatura dada em Celsius para Fahrenheit. Utilize a seguinte equação:
#include <stdio.h>
int main()
{
  float c;
  printf("Informe a temperatura em Celsus: ");
  scanf("%f", &c);
  printf("A temperatura em Fahrenheit será de %.2f", (c * 9 / 5) + 32);
  return 0;
}

// 4. Um carro percorreu determinada distância em determinado tempo. Desenvolva o algoritmo para ler
// estes dados e calcular a velocidade média do carro. Sabe-se que a velocidade média é a razão entre a
// distância percorrida e o tempo para percorrê-la.
#include <stdio.h>
int main()
{
  float d, t;
  printf("Informe a distância, em km, percorrida: ");
  scanf("%f", &d);
  printf("Informe o tempo, em horas, do trajeto: ");
  scanf("%f", &t);
  printf("A velocidade do carro era de %.2f km/h", d / t);
  return 0;
}

// 5. Calcule a média final de um aluno, considerando que existem duas avaliações no semestre.
#include <stdio.h>
int main()
{
  float n1, n2;
  printf("Informe a primeira nota: ");
  scanf("%f", &n1);
  printf("Informe a segunda nota: ");
  scanf("%f", &n2);
  printf("A média final do aluno sera %.2f", (n1 + n2) / 2);
  return 0;
}

// 6. Escreva um algoritmo para ler o número de eleitores de um município, o número de votos brancos,
// nulos e válidos. Calcule e escreva o percentual que cada um representa em relação ao total de eleitores
#include <stdio.h>
int main()
{
  float b, n, v, t;
  printf("Informe a quantidade de votos brancos: ");
  scanf("%f", &b);
  printf("Informe a quantidade de votos nulos: ");
  scanf("%f", &n);
  printf("Informe a quantidade de votos validos: ");
  scanf("%f", &v);
  t = b + n + v;
  printf("A porcentagem dos votos eh de:\nVotos Brancos: %.2f\nVotos Nulos: %.2f\nVotos Validos: %.2f\n", (b * 100 / t), (n * 100 / t), (v * 100 / t));
  return 0;
}

// 7. Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Escreva um algoritmo para ler
// o valor do litro do combustível (em R$), a marcação do odômetro no início do dia, a marcação no final
// do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos passageiros. Calcule e
// escreva a média do consumo em Km/l e o lucro líquido do dia.
#include <stdio.h>
int main()
{
  float vl, oi, of, ng, rp;
  printf("Informe, em R$, o litro do combustível: ");
  scanf("%f", &vl);
  printf("Informe a marcação do odômetro no início do dia: ");
  scanf("%f", &oi);
  printf("Informe a marcação do odômetro no final do dia: ");
  scanf("%f", &of);
  printf("Informe quantos litros foram gastos: ");
  scanf("%f", &ng);
  printf("Informe o total recebido: ");
  scanf("%f", &rp);
  printf("A média do consumo em Km/l é de: %.2f\nO lucro líquido do dia é de: %.2f", (of - oi) / ng, rp - (vl * ng));
  return 0;
}

// 8. Faça um programa que leia 3 valores em variáveis distintas, armazene a soma das duas primeiras em
// uma nova variável e o produto das duas últimas em outra, e mostre como resultado o produto das duas
// novas variáveis.
#include <stdio.h>
int main()
{
  float v1, v2, v3, s, p;
  printf("Informe a primeira variável: ");
  scanf("%f", &v1);
  printf("Informe a segunda variável: ");
  scanf("%f", &v2);
  printf("Informe a terceira variável: ");
  scanf("%f", &v3);
  s = v1 + v2;
  p = v2 * v3;
  printf("O valor da primeira variável é de %.2f e da segunda é de %.2f.", s, p);
}

// 9. Escrever um algoritmo para ler as dimensões de uma cozinha (comprimento, largura e altura), calcular e
// escrever a quantidade de caixas de azulejos para azulejar todas as paredes (considere que não será
// descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 metros quadrados.
#include <stdio.h>
int main()
{
  float com, alt, lar;
  printf("Informe o comprimento da cozinha: ");
  scanf("%f", &com);
  printf("Informe a altura da cozinha: ");
  scanf("%f", &alt);
  printf("Informe a largura da cozinha: ");
  scanf("%f", &lar);
  printf("Serão necessárias %.2f caixas.", (com * alt) + (lar * alt) / 1.5);
  return 0;
}

// 10. Fazer um algoritmo para ler a quantidade vendida e o valor unitário (R$) de um produto. Calcular e
// mostrar o valor total da venda e o valor do ICMS (18%) sobre a venda.
#include <stdio.h>
int main()
{
  int qn;
  float vu, vt;
  printf("Informe a quantidade de produtos vendidos: ");
  scanf("%i", &qn);
  printf("Informe o valor unitário dos produtos vendidos: ");
  scanf("%f", &vu);
  vt = qn * vu;
  printf("O valor total da venda é %.2f R$ e o valor do ICMS sobre ela é de %.2f R$", vt, (vt * 0.18));
  return 0;
}
