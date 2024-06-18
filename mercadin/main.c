/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char tomate[8] = "tomate", leite[8]= "leite", pera[8] = "pera", faca[8]= "faca", luz[8] = "luz", creme[8] = "creme";
    int escolha, soma, dec;
    while (true){ 
    printf("qual item você quer? 0 tomate, 1 leite, 2 pera, 3 faca,4 luz,5 creme");
    scanf("%d", &escolha);
    switch(escolha){
        case 0:
            
             soma = soma + 5;
             break;
        case 1:
            soma = soma + 3;
            break;
        
        case 2:
            soma = soma + 2;
            break;
        
        case 3:
            soma = soma + 15;
            break;
        
        case 4:
            soma = soma + 16;
            break;
        
        case 5:
            soma = soma + 30;
            break;
        
        default:
            printf("Esse item não existe no mercado");
        
    }
    printf("Você quer mais itens? 0 / 1");
    scanf("%d", &dec);
    if (dec == 0) {
        break;
    }
    }
    printf("A SOMA TOTAL DEU: %d", soma);
}
