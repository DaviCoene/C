#include <stdio.h>

int main(){

    int denominador, numerador, i, verificador, maior;

    printf("escreva o Numerador: " );
    scanf("%d", &numerador);


    printf("escreva o denominador: " );
    scanf("%d", &denominador);
    if (denominador > numerador){
        maior = denominador;
    }
    else{
        maior = numerador;
    }
    for (i = maior; i > numerador/2 || i > denominador /2; i--){
        verificador = numerador % i;
        if (verificador == 0){
            verificador = denominador % i;
            if (verificador == 0){
                numerador = numerador / i;
                denominador = denominador / i;
            }
        }
    }
    
    printf("Numerador: %d\n", numerador);
    printf("denominador: %d", denominador);
    return 0;
}