#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

int main() {
  float numero1; 
  char nome1[100];

  float numero2; 
  char nome2[100];


  printf("Digite idade: ");
  scanf("%f", &numero1); 

  printf("Digite nome: ");
  scanf("%s", nome1);

  printf("Digite idade: ");
  scanf("%f", &numero2); 

  printf("Digite nome: ");
  scanf("%s", nome2);

  if (numero1 > numero2) {
    printf("1 é mais velho");
}
  else {
    printf("2 é mais velho");
  }

}
