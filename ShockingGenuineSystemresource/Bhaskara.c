#include <stdio.h>

int main(){
  int a, b, c, x1, x2;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  int delta = (b*b) - 4 * a * c;
  if (delta < 0){
    printf("Não há raízes reais");
  }
  else{
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
  }

  printf(x1);
  printf(x2);
  
  
}