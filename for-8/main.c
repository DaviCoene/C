/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 100, i, j;
  int ehPrimo = 1; // Assume que o número é primo

    for (j = 0 ; j < n ; j++){
    int ehPrimo = 1;
      if (j <= 1) { // 1 e números menores que 1 não são primos
        ehPrimo = 0;
      } else {
        for (i = 2; i <= j/2; i++) { // Testa divisibilidade por 2 até a metade de n
          if (j % i == 0) {
            ehPrimo = 0; // Se encontrar divisor, o número não é primo
          }
        }
      }
    
      if (ehPrimo) {
        printf("%d,", j);
      } 
    }
  return 0;
}
