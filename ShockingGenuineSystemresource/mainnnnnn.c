#include <stdio.h>
int main(){
  int lado1 = 0;
  scanf("%d", &lado1);

  int lado2 = 0;
  scanf("%d", &lado2);

  int lado3 = 0;
  scanf("%d", &lado3);

  if (lado1 == lado2){
    if (lado2 == lado3){
      printf("Equilatero");
    }
    else{
      printf("Isosceles");
    }
  }
  else if (lado2 == lado3){
    if (lado2 != lado1){
      printf("Isoceles");
    }
  else{
    printf("Escaleno");
  }
}
}