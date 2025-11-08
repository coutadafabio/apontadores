 #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int numeros [10]={58,56,89,102,103,2005,22,64,78,98};
    int *ptr1;
    int aux;
    int aux2;
    int aux3;
    int numerosaux[10];
    int *ptraux = numerosaux;
    ptr1 = numeros;  // inicializar ponteiro
    aux = *ptr1;     // aux = 10
    aux2 = *ptr1;    // iniciar aux2 também
    

    for(ptr1 = numeros; ptr1 < numeros + 10; ptr1++, ptraux++)
    {   
        if (*ptr1<*(ptr+1))
        {
            aux=*ptr1;
            *ptraux = aux;
        }
        else{
            *ptraux = 0;
        }
    }
    ptraux = numerosaux;
    for (ptr1=numeros; ptr1<numeros+10; ptr1++, ptraux++)
    {
        printf("%d\n", *ptraux);
            
    }
    getchar();

    return 0;
}
