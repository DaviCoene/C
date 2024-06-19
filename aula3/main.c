#include <stdio.h>
#include <string.h>
#include <conio.h>

void alterarIdade(int*idade){
    *idade = 30;
}

int main(){

    int idade = 20;
    printf("idade %d", idade);
    alterarIdade(&idade);
    printf("idade %d", idade);
    return 0;
}