#include <stdio.h>
#include <string.h>

int main(){
    char nomes[3][50];
    int i;
    for (i = 0; i < 3; i++){
        fgets(nomes[i], 49, stdin);
    }
    for (i = 0; i < 4; i++){

            printf("%s", nomes[i]);
        
        printf("\n");
    }
    
}