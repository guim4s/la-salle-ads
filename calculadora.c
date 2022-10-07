/*
* Autor: Guilherme Wendt
* Versão: 1.0
* GitHub: @guim4s
* Link para o projeto: https://github.com/guim4s/la-salle-ads
*/

#include <stdbool.h>
#include <math.h>
#include <stdio.h>

/* 
* Função que obtem o primeiro valor para realizar as operações 
* Optei em separar o código para poder ter uma validação sobre os valores menores que 0
* E não ficar repetivivo dentro de cada operação
*/
float obtemNumero1()
{
  float numero1;
  printf("\nDigite o 1o valor: ");
  scanf("%f", &numero1);

  while (numero1 <= 0)
  {
    printf("O valor digitado não pode ser igual ou menor que 0\n");
    printf("Digite novamente: ");
    scanf("%f", &numero1);
  }
  return numero1;
}

// Função que obtem o segundo valor para realizar as operações 
float obtemNumero2()
{
  float numero2;
  printf("Digite o 2o valor: ");
  scanf("%f", &numero2);

  while (numero2 <= 0)
  {
    printf("O valor digitado nao pode ser igual ou menor que 0\n");
    printf("Digite novamente: ");
    scanf("%f", &numero2);
  }

  return numero2;
}

int obtemPotencia()
{
  int potencia;
  printf("Digite o valor para potencializar: ");
  scanf("%d", &potencia);

  while (potencia <= 0)
  {
    printf("O valor digitado nao pode ser igual ou menor que 0\n");
    printf("Digite novamente: ");
    scanf("%d", &potencia);
  }

  return potencia;
}

int main()
{

  // Inicializaçao das variáveis utilizadas 
  float valor1, valor2, resultado;
  int operacao, potencia;
  bool sair = false;

  // Mensadem inicial, conforme solicitada
  printf("\nSou o Guilherme Wendt, curso Analise e Desenvolvimento de Sistemas na La Salle.\n");
  printf("Codigo de aluno: 202210989\n");
  printf("\nBem vindo a Calculadora escrita em C!\n");

  /* 
  * Menu de oções, permanece rodando durante toda a execução do programa
  * Ele só é encerrado quando o usuário escolha a opção de saída
  */
  while (!sair)
  {
    printf("Escolha a sua opcao: \n");
    printf("1 - Soma\n");
    printf("2 - Substracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    printf("5 - Raiz Quadrada\n");
    printf("6 - Potencia\n");
    printf("0 - Sair\n");
    printf("Opcao > ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 0:
      printf("\nEncerrando as oepracoes...\n");
      printf("Bye!\n");
      sair = true;
      break;

    case 1:
      // Atribuição dos valores para realizar o cálculo
      // Como o resultado é atribuído a outra variável, o próprio executável já faz a chamada para a função 
      valor1 = obtemNumero1();
      valor2 = obtemNumero2();
      resultado = valor1 + valor2;
      printf("%.0f + %.0f = %.2f\n\n", valor1, valor2, resultado);
      break;

    case 2:
      valor1 = obtemNumero1();
      valor2 = obtemNumero2();
      resultado = valor1 - valor2;

      printf("%.0f - %.0f = %.2f\n\n", valor1, valor2, resultado);
      break;

    case 3:
      valor1 = obtemNumero1();
      valor2 = obtemNumero2();
      resultado = valor1 / valor2;
      printf("%.0f / %.0f = %.2f\n\n", valor1, valor2, resultado);
      break;

    case 4:
      valor1 = obtemNumero1();
      valor2 = obtemNumero2();

      resultado = valor1 * valor2;
      printf("%.0f x %.0f = %.2f\n\n", valor1, valor2, resultado);
      break;

    case 5:
      valor1 = obtemNumero1();
      resultado = sqrt(valor1);
      printf("A raiz quadrada de %.0f = %.2f\n\n", valor1, resultado);
      break;

    case 6:
      valor1 = obtemNumero1();
      potencia = obtemPotencia();
      resultado = powf(valor1, potencia);
      printf("%.2f elevado a potencia de %d =  %.2f\n\n", valor1, potencia, resultado);
      break;

    default:
      printf("\nCodigo invalido, tente novamente.\n\n");
      break;
    }
  }

  return 0;
}
