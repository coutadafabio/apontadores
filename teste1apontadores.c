#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int numeros[5];
    char n[30];
    int flag=0;
    int *p;
    int soma=0;
    
    do
    { 
        flag=0;
        
        for (int i=0; i<5;i++)
        {
            printf("Insere %d numero valido:",i+1);
            scanf(" %c",&n[i]);
            n[i+1]='\0';
        }
        
        
        for (int i=0; i<strlen(n); i++)
        {
            if (isdigit(n[i])==0)
            {
                printf("Erro!\n");
                break;
            }else
            {
                numeros[i]=n[i]-'0';
                flag++;

            }
        }
    }while (flag != 5);
    
    
    for (int * p = numeros;p < &numeros[5];p++)
    {
        soma = soma + *p;
    }
    printf("soma: %d", soma);

    getchar ();
    return 0;

}

