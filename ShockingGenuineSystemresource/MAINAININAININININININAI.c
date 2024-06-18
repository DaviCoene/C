#include <stdio.h>

int main(){
  double i, g,soma, cima;

  scanf("Digite o valor: %.2f  ", &i);

  if (i < 250){
    i = i + i * 0.02;
  }

  printf("O valor da parcela é: %.2f", i);
}