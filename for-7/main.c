/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, i,j,cont = 0;
    float r; 
    char p = '*';
    
    scanf("%d", &a);
    r = a;
    for (i = 0; i < a; i++){
        r = r / 10;
        if (r < 1){
            break;
        }
        cont = cont + 1;
    }
    printf("%d", cont);
    
    
}
