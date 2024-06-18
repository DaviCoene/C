#include <stdio.h>

int main() {
  // Declaração das variáveis
  float nota1, nota2, nota3, nota4; 
  float peso1, peso2, peso3, peso4; 
  float mediaPonderada; 


  nota1 = 7.5; 
  nota2 = 8.2; 
  nota3 = 9.7; 
  nota4 = 6.8; 

  peso1 = 2; 
  peso2 = 3; 
  peso3 = 5; 
  peso4 = 1; 

  // Cálculo da média ponderada
  mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) + (nota4 * peso4)) / (peso1 + peso2 + peso3 + peso4);

  
  printf("A média ponderada das notas é: %.2f\n", mediaPonderada);

  return 0;
}
