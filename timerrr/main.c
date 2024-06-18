#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>//necessário para usar localtime() e struct tm
int main(void)
{
    int cont = 0;
  //ponteiro para struct que armazena data e hora  
  struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  data_hora_atual = localtime(&segundos);  
  while (true){
  system("sleep 01");
  system("clear");
    cont = cont + 1;
  printf("\nHora: %d:",data_hora_atual->tm_hour);//hora   
  printf("%d:",data_hora_atual->tm_min);//minuto
  printf("%d\n",data_hora_atual->tm_sec);//segundo  

  //dia do mês
  printf("\nData: %d/", data_hora_atual->tm_mday);
  printf("%d/",data_hora_atual->tm_mon+1); //mês
  printf("%d\n\n",data_hora_atual->tm_year+1900); //ano
  printf("%d", cont);
  }
  return 0;
}


