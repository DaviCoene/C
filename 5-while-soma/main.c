/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int a, b, c, s;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    do{
    s = a + b+ c;
    if (s != 45){
        
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    }}    
    while( s != 45);
    
    printf("ok");
    

    return 0;
}
