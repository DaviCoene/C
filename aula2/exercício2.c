#include <stdio.h>
#include <string.h>

int main(){
char nome, aux;
    int i;
    scanf("%c", &nome);
    for(i = 1; i < 26; i++){
        aux = nome + i;
        if(aux == 123 || aux == 91){
            break;
        } 
        printf("%c", aux);
    }
}
