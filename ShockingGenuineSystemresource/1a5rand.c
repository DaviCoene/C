#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero;

  scanf("Escolha um numero entre 1 e 5 %d", &numero);

  if (numero > 5){
    printf("Esse numero é maior que 5");
  }

  else if(numero < 1){
    printf("Esse numero é menor que 1");
  }

  else{
    printf(numero);
  }
}