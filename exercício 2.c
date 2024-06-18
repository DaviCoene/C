#include <stdio.h>
#include <locale.h>
float conversor(float unidade,int tipo){
    if (tipo == 0) {
        unidade  = unidade / 3.6;
        printf("A velocidade em m/s eh %.2f", unidade);
    }
    else{
        unidade  = unidade * 3.6;
        printf("A velocidade em km/h eh %.2f", unidade);
    }

}
int main(){
    float unidade;
    int  tipo;
    printf("quer converter para qual unidade: ? (0 km/h - m/s) - (1 m/s - km/h): ");
    scanf("%f", &tipo);
    printf("Qual a quantidade: ");
    scanf("%f", &unidade);
     conversor(unidade, tipo);



}