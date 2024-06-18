/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, i,   soma ;
    float med, r= 0, v;
    scanf("%d", &a);
    v = a;
    
    
    for (i = 0; i < a; i++){
        scanf("%d", &soma);
        r = soma + r;
    }
    med = r / v;
    printf("%.2f", med);
}
