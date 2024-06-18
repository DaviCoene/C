#include <stdio.h>

int main() {
  int n, i, j;
  int ehPrimo = 1; // Assume que o número é primo

  printf("Digite um número inteiro positivo: ");
  scanf("%d", &n);
    for (j = 0 ; j < n ; j++){
    int ehPrimo = 1;
      if (j <= 1) { // 1 e números menores que 1 não são primos
        ehPrimo = 0;
      } else {
        for (i = 2; i <= j/2; i++) { // Testa divisibilidade por 2 até a metade de n
          if (j % i == 0) {
            ehPrimo = 0; // Se encontrar divisor, o número não é primo
          }
        }
      }
    
      if (ehPrimo) {
        printf("%d,", j);
      } 
    }
  return 0;
}

