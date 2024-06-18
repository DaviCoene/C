#include <stdio.h>

int main(){
  int g = 0;

  scanf("Insira um numero %d", &g);

  if (g > 20){
    g = g /2;
  }

  printf(g);
}
