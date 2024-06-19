#include <stdio.h>
#include <string.h>
#include <conio.h>
void maiusc(char a[]){
    int i, aux, cont, aa;
    for(i = 0; i < 30; i++){
        aux = a[i];
        if(aux == NULL){
            break;
        } 
        if(aux > 91 && aux < 123){
            aux = aux - 32;
        } 
        a[i] = aux;
        printf("%c", aux);
        
        aux = 0;
    }
}
void inv(char a[]){
    int i, aux, cont, aa;
    for(i = aa; i > 0; i--){
        aux = a[i];
        if(aux == NULL){
            continue;
        } 
        else{
            printf("%c", aux);
        }
    }
}
int quantidade(){
    
}


int main(){
    int i, aux, cont, aa;
    char *a;
    char texto[30];
    fgets(texto, 30, stdin);
    a = &texto; 
    printf("TUDO PRA MAIUSCULO: \n");
    maiusc(a);
    // for(i = 0; i < 30; i++){
    //     aux = texto[i];
    //     if(aux == NULL){
    //         break;
    //     } 
    //     if(aux > 91 && aux < 123){
    //         aux = aux - 32;
    //     } 
    //     texto[i] = aux;
    //     printf("%c", aux);
        
    //     aux = 0;
    // }
    aa = strlen(texto);
    printf("TUDO INVERTIDO: \n");
    for(i = aa; i > 0; i--){
        aux = texto[i];
        if(aux == NULL){
            continue;
        } 
        else{
            printf("%c", aux);
        }
    }
    cont = 0;
    printf("\n QUANTIDADE: \n");
    for(i = 0; i < 30; i++){
        aux = texto[i];
        
        if(aux == NULL){
            break;
        } 
        switch (aux)
        {
        case 65:
            cont++;
            break;
        case 69:
            cont++;
            break;
        case 73:
            cont++;
            break;
        case 79:
            cont++;
            break;
        case 85:
            cont++;
            break;
        default:

            break;
        }
        
        aux = 0;
    }
    printf("\n %d", cont);

    return 0;
}