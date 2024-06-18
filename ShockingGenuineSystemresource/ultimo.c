#include <stdio.h>

int main() {
  int numero1, numero2; 
  int opcao; 


  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);
  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  printf("\nMenu de operações:\n");
  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Divisão\n");
  printf("4 - Multiplicação\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
      break;
    case 2:
      printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
      break;
    case 3:
      if (numero2 == 0) {
        printf("Erro: Divisão por zero!\n");
      } else {
        printf("%d / %d = %d\n", numero1, numero2, numero1 / numero2);
      }
      break;
    case 4:
      printf("%d * %d = %d\n", numero1, numero2, numero1 * numero2);
      break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;
}
