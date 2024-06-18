/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cel, fah, t;
    printf("TEMP EM CELSIUS(0) OU TEMP EM FAHRENHEIT(1): ");
    scanf("%d", &t);
    

    if (t == 0){
        printf("QUAL A TEMP: ");
    scanf("%d", &cel);
        fah = (cel * 9/5) + 32;
        printf("Sua temperatura é %d ºF", fah);
        if (cel > 30){
            printf("TA QUENTE");
        }

    }
    else{
        printf("QUAL A TEMP: ");
    scanf("%d", &fah);
        cel = (fah - 32) * 5/9;
        printf("Sua temperatura é %d ºC", cel);
        if (cel > 30){
            printf("TA QUENTE");
        }
    }
    
}
