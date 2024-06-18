#include <stdio.h>

int main(){

    char matriz[5][10];
    char resultado[10] = {'a', 'd', 'e', 'a', 'b','d', 'b', 'a', 'c', 'd'};


    int nota[5];

    int i,j, acertos;
    //char valor;
    for (i = 0 ; i < 5; i++){
        for (j = 0; j < 10; j++){
            printf("Repostas do %d candidato: \n", i + 1);
            printf("Questão %d do candidato: \n", j + 1);
            while (getchar() != '\n'); // Limpa o buffer de entrada
            scanf("%c", &matriz [i][j]);
            //matriz [i][j] = valor;
            printf(" \n");
        }
    }
     for (i = 0 ; i < 5; i++){
        for (j = 0; j < 10; j++){

            if(matriz[i][j] == resultado[j]){
                acertos = acertos + 1;
            }
            
        }
        nota[i] = acertos;
        acertos = 0;

    }
    for (i = 0 ; i < 5; i++){
        
        printf("A nota do aluno %d: \n", i +1);
        printf("A nota é %d: \n", nota[i]);

    }
    
    return 0;

}