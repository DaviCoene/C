/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, cnt =0 ;

  printf("Gerando 10 valores aleatorios:\n\n");
 
 scanf("%d", &b);
    a = rand() % 1000 + 1;
    
    while (a != b){
        if (a > b){
            printf("eh maiorr ");
        }
        else if  (a < b){
            printf("eh menor ");
        }
        scanf("%d", &b);
        cnt++;
    }
  printf("acertou!\n");
  printf("LEVOU %d tentativas", cnt);
    
}

