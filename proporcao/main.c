#include <stdio.h>
int main() {

  float minA = 0;
  float maxA = 4095;
  float minB = -5;
  float maxB = 5;
  
  float valorA = 2000;

  float valorNormalizadoA = (valorA - minA) / (maxA - minA);

  float valorMapeadoB = minB + (valorNormalizadoA * (maxB - minB));

  printf("Valor na escala A: %.2f\n", valorA);
  printf("Valor mapeado na escala B: %.5f\n", valorMapeadoB);

  return 0;
}
