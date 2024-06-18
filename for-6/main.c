/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, i,j;
    char p = '*';
    
    scanf("%d", &a);
    
    for (i = 0; i < a+1; i++){
        for (j = 0; j < i; j++){
            printf("%c", p);
        }
        printf("\n");
        
    }
    printf("\n");
    for(i = 0; i < a + 1; i++){
        for (j = 0; j < a; j++){
            printf("%c", p);
        }
        printf("\n");
    }
}
