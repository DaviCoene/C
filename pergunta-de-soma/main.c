#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroA, numeroB, soma, resposta, cont;
    srand(time(NULL));
    while (cont < 5){
    numeroA = rand()% 100 + 1;
    numeroB = rand()% 100 + 1;
    printf("QUAL A SOMA DE %d + %d: \n",numeroA, numeroB);
    scanf("%d", &resposta);
    soma = numeroB + numeroA;
    if (resposta == soma){
        printf("\n Acertou");
    }
    else{
        printf("\n Errou");
    }
    cont = cont + 1;
    }

    return 0;
}
