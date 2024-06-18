/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void troca(int a ,int b){
    int *ab, *gh; 
    
    ab = &a;
    gh = &b;
    *gh = 12;
    *ab = 19;
    printf("%i %i " ,*ab, *gh);
    printf("%d %d ", a, b);

    
}

int main()
{
    
    int a = 10, b = 15;
    troca(a, b);
    
    
    
}
