#include <stdio.h>

int main(){

    int vect[10];
    int i = 0, valor, ok = 0, j;
    for ( i = 0; i < 10; i++){
        printf("Insira o %d valor: ", i + 1);
        scanf("%d", &valor);
            for (j = 0; j < i; j ++){
                if (valor == vect[j]) {
                    printf("valor ja foi digitado, digite novamente: ");
                    scanf("%d", &valor);
                    j = -1;
                }

            }

        
        
        vect[i] = valor;
        
    }
    printf("Qual valor voce quer buscar? : ");
    scanf("%d", &valor);
    for ( i = 0; i < 10; i++){
        
        if (valor == vect[i]){
        printf(" O valor eh %d, e estah na posicao :  %d" , vect[i], i + 1);
        ok = 1;
        }
    } 
    if (ok == 0){
        printf("Valor não encontrado");
    }
    return 0;
}