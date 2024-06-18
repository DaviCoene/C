/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int soma(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int mult(int x, int y){
    return x * y;
}
float div(float x, float y){
 return x/y;   
}
int main()
{
    int a , b , c, x, y;
    printf("Digite a operação, 1 soma, 2sub, 3, mult, 4 div: ");
    scanf("%d", &a );
    printf("Digite os valores: ");
    scanf("%d", &x);
    scanf("%d", &y);
    while (a == 4 && x == 0){
        scanf("%d", &x);
    }
    while (a == 4 && y == 0){
        scanf("%d", &y);
    }
    switch(a){
        case 1:
           printf("%d", soma(x,y)) ;    
           
           break;
        case 2:
            printf("%d", sub(x,y));
            break;
        case 3:
            printf("%d", mult(x,y));
            break;
        case 4:
            printf("%.2f", div(x,y));
            break;
        default:
            printf("ta errado");
            break;
    }
    
    return 0;
}

