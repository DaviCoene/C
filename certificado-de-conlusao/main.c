/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
     char nome2[100];
    char data_nasc[10];
    char cpf[14];
    
    scanf("%s\n", nome);
    scanf("%s", nome2);
    scanf("%s\n", data_nasc);
    scanf("%s", cpf);
    
    
    
    printf("-----------------------\n");
    printf("NOME      %s %s\n", nome, nome2);
    printf("DATA      %s\n", data_nasc);
    printf("CPF:      %s\n", cpf);
    printf("------------------------");
    
}
