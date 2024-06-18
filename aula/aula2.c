#include <stdio.h>
#include <string.h>

// int main(){
//     char nome[50];
//     strcpy(nome, "Davi");
//     gets(nome);
//     fgets(nome, 50, stdin);
//     return 0;
// }
int main(){
    char nome, aux;
    int i;
    scanf("%c", &nome);
    nome = nome + 15;
    printf("%c", nome);
    for(i = 0; i < 26; i++){
        aux = nome + i;
        if(nome == 16){
            break;
        } 
        printf("%c", aux);
    }
}