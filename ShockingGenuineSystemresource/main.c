#include <stdio.h>

int main(){
  int g = 0;
  double preco = 0.25;
  double valor = 0;
  scanf("%d", &g);

  if(g > 100){
    preco = 0.20;
  }
  valor = g * preco;

  printf("%.2lf\n", valor);

  
}