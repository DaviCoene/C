#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario, anos;
    printf("Quanto voce ganha: ");
    scanf("%f", &salario);
    printf("Quanto voce ja trabalhou? (anos): ");
    scanf("%f", &anos);

    if ((salario <= 500) ){
        salario = salario + (salario * 0.25);
    } 

    else if(salario <= 1000) {
        salario = salario + (salario * 0.20) + 100;
    } 

    else if ((salario <= 1500) ){
        salario = salario + (salario * 0.15) + 200;
    } 
    
    else if ((salario <= 2000) ){
        salario = salario + (salario * 0.10) + 300;
    } 

    else if ((salario > 2000) ){
        salario = salario + (salario * 0) + 500;
    } 
    else{
        salario = salario;
    }

    if (anos < 1){
        salario = salario + 0;
    }
    
    else if (anos <= 3 ){
        salario = salario + 100;
    }
    else 
    if (anos <= 6){
        salario = salario + 200;
    }
    
    else if (anos <= 10){
        salario = salario + 300;
    }
    else{
        salario = salario + 500;
    }

    printf("Salario atual e %.2f" , salario);

    SetConsoleOutputCP(CPAGE_DEFAULT);

}