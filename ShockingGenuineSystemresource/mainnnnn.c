#include <stdio.h>
int main(){
  int idade = 0;
  scanf("%d", &idade);

  if (idade < 11){
    printf("Categoria infantil");
  }
  else if (idade < 11){
    printf("Categoria juvenil");
  }
  else{
    printf("Categoria Senior");
  }
}