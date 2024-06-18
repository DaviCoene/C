#include <stdio.h>
void TrocaA(int a, int b){
    
    int *gh, *br;
    
    gh = &a;
    br = &b ;
    
    if (gh > br){
        printf("Maior a %x", gh);
    }
    else{
        printf("Maior b %x", br);
    }
}

int main()
{
    
    int a = 10, b = 15;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    TrocaA(a,b);
    
    
    
}