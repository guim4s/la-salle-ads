#include <stdbool.h>
#include <stdio.h>

int main() {

  float numero1, numero2, resultado;
  int operacao;
  bool sair;
  
  printf("Bem vindo a Calculadora escrita em C\n\n");
  printf("Escolha a sua opção: ");
  printf("1 - Soma\n");
  printf("2 - Substração\n");
  printf("3 - Divisão\n");
  printf("4 - Multiplicação\n");
  printf("5 - Raiz\n");
  printf("6 - Potencia\n");
  printf("Opção > ");
  scanf("%d", &operacao);

  printf("Digite o numero 1: ");
  scanf("%f", &numero1);

  while (numero1 <= 0) {
    printf("O valor digitado não pode ser igual ou menor que 0\n");
    printf("Digite o numero 1 novamente: ");
    scanf("%f", &numero1);  
  }
  
  printf("Digite o numero 2: ");
  scanf("%f", &numero2);

  while (numero2 <= 0) {
    printf("O valor digitado não pode ser igual ou menor que 0\n");
    printf("Digite o numero 1 novamente: ");
    scanf("%f", &numero1);  
  }  
  
  resultado = numero1 + numero2;
  printf("A soma entre os dois valores eh: %.2f\n", resultado);

  resultado = numero1 - numero2;
  printf("A subtração entre os dois valores eh: %.2f\n", resultado);

  resultado = numero1 * numero2;
  printf("A multiplicação entre os dois valores eh: %.2f\n", resultado);

  resultado = numero1 / numero2;
  printf("A divisão entre os dois valores eh: %.2f\n", resultado);
  
  return 0;
}
  
