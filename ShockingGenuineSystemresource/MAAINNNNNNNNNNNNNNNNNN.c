#include <stdio.h>

int main(){
  int i, g,soma, cima;
  int valores[3];
  int peso[3];
  double j;
  peso[0] = 2;
  peso[1] = 3;
  peso[2] = 5;


  for (i= 0; i < 3; i++){
    scanf("Insira um valor %d", &g);
    
    soma = soma + g;
    valores[i] = g;
  }


  scanf("DIGITE A FREEQUNCIA %.2f", &j);
  
  double media;

  media = soma / 3;

  printf("O valor da media é: %.2f", media);
   if (media > 7 && j > 75) {
     printf("Aprovado");
   }
   else if (media > 4 && j > 75){
     printf("Recuperação");
   }
  else{
    printf("Reprovado");
  }

}