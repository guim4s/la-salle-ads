#include <stdbool.h>
#include <stdio.h>

int main() {

  float numero1, numero2, resultado;
  int operacao;
  bool sair;
  
  printf("\nBem vindo a Calculadora escrita em C\n");
  
  while (!sair) {

    printf("Escolha a sua opção: \n");
    printf("1 - Soma\n");
    printf("2 - Substração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("5 - Raiz\n");
    printf("6 - Potencia\n");
    printf("0 - Sair\n");
    printf("Opção > ");
    scanf("%d", &operacao);
    
    switch (operacao) {
      case 0:
        printf("Voce esta saindo da Calculadora!");
        sair = true;
      break;

      case 1:
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
    printf("A soma entre os dois valores eh: %.2f\n\n", resultado);
        break;
      case 2:
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
          resultado = numero1 - numero2;
    printf("A subtração entre os dois valores eh: %.2f\n\n", resultado);  
        break;

      case 3:
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
          resultado = numero1 / numero2;
    printf("A divisão entre os dois valores eh: %.2f\n\n", resultado);
        break;

      case 4: 
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
          resultado = numero1 * numero2;
    printf("A multiplicação entre os dois valores eh: %.2f\n\n", resultado);
        break;

      case 5:
        break;

      case 6:
        break;

      default:
        printf("\nCodigo invalido, tente novamente\n\n");
      break;
    }
  }
  return 0;
}
  
