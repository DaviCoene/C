#include <stdio.h>
void TrocaA(int *a, double *b, char *c){
    
  
    printf("ANTES %d %.2f %c", *a, *b, *c);
    
    *a = 15;
    *b = 99.9;
    *c = 'h';
    
    printf(" DEPOIS %d %.2f %c", *a, *b, *c);
    
    
}

int main()
{
    
    int a = 10;
    double b = 60.6;
    char c = 'A';
    
    TrocaA(&a,&b, &c);
    
    
    
}