/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float Celsius(float x){
 return (x - 32) * 5/9;
}
float FAH(float x){
 return (x * 9/5) + 32;
}
float Kelvin(float x){
 return x - 273.15; 
}
int main()
{
    int a , b , c, x, y;
    printf("Digite a temperatura, 1 KElvin, 2 Fahrenheit, 3 Celsius: ");
    scanf("%d", &a );
    printf("Digite os valores: ");
    scanf("%d", &x);
    printf("Converter para qual? ");
    switch(a){
        case 1:
            printf("Converter para qual? 1 Celsius, 2 Fahrenheit");
            scanf("%d", &b );
            switch(b){
                case 1:
                   c =  Celsius(x);
                   break;
                case 2:
                   c =  FAH(x);
                   break;
                default:
                    scanf("%d", &b );

            }
            printf("%d", c) ;    
           
           break;
        case 2:
            printf("Converter para qual? 1 Celsius, 2 Kelvin");
            scanf("%d", &b );
            switch(b){
                case 1:
                   c =  Celsius(x);
                   break;
                case 2:
                   c =  Kelvin(x);
                   break;
                default:
                    scanf("%d", &b );

            }
            printf("%d", c) ;    
           
           break;
        case 3:
            printf("Converter para qual? 1 KElvin, 2 Fahrenheit");
            scanf("%d", &b );
            switch(b){
                case 1:
                   c =  Kelvin(x);
                   break;
                case 2:
                   c =  FAH(x);
                   break;
                default:
                    scanf("%d", &b );

            }
            printf("%d", c) ;    
           
           break;
    }
    
    return 0;
}

