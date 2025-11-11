#include <stdio.h>
#include <stdlib.h>
  
void troca (int * p1, int *p2)
{
    int aux;  
    aux = *p2;
    *p2=*p1;
    *p1=aux;
    printf("a: %d; b: %d", *p1, *p2);
}

int main()
{
    int a = 5; 
    int b = 6;
    int * p1 = &a;
    int * p2 = &b;
    troca(p1,p2);

    getchar();
    return 0;
}