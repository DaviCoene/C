#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b ;

  printf("Gerando 10 valores aleatorios:\n\n");
 
 scanf("%d", &b);
    a = rand() % 1000 + 1;
    
    while (a != b){
        scanf("%d", &b);
    }
  printf("OK\n");
    


    
}
