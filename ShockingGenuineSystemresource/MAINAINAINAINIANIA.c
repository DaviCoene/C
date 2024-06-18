#include <stdio.h>

int main(){
  char soma;
  double i;

  scanf("Escreva o total %.2f", &i);
  scanf("Cartão (d/a/c): %soma", &soma);

  if (soma == 'a'){
    i = i - i * 0.05;
  }
  else if (soma == 'c'){
    i = i;
  }
  else{
    i = i + i * 0.1;
  }

  printf("O valor da compra é: %.2f", i);
  
}