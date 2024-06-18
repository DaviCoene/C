/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a = 1,  b = 15, i;
    char z[3] = "|||";


    while (a != b){
        a = a + 1;
        
        printf("----------------------------------------------\n");
        for (i = 0 ; i < a ; i++){
            printf("%s",z);
        }
        printf("\n-----------------------------------------------\n");
        system("sleep 01");
        system("clear");
        
    }
    printf("Ok");
}
