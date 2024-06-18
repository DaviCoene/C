#include <stdio.h>
#include <stdlib.h>

int main(){
  char ntimes[8];
  int gtimes[8];
  ntimes[0] = 'a';
  ntimes[1] = 'b';
  ntimes[2] = 'c';
  ntimes[3] = 'd';
  ntimes[4] = 'e';
  ntimes[5] = 'f';
  
  
  srand(time(NULL));
  
  for(int i = 0; i < 8; i++){
    gtimes[i] = rand() % 10 + 1;  
  }
  
  char ntimesG[4];
  int gtimesG[4];

  for (int i = 0; i < 8; i++){
    scanf("%c", &ntimes[i]);
  }
  for (int i = 0; i < 8; i++){
    scanf("%d", &gtimes[i]);
  }

  for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
      if (gtimes[i] > gtimes[j]){
        int aux = gtimes[i];
        gtimes[i] = gtimesG[i];
        ntimes[i] = ntimesG[i];
      }
    }
  }

  char ntimesGA[2];
  int gtimesGA[2];

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (gtimesG[i] > gtimesG[j]){
        int aux = gtimesG[i];
        gtimesG[i] = gtimesGA[i];
        ntimesG[i] = ntimesGA[i];
      }
    }
  }
  int vare = rand() % 2 + 1;
  char timeV = ntimesGA[vare];

  printf("O time vencedor é: %c", timeV);
}