#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int numeros[5];
    char n[30];
    int flag=0;
    
    do
    { 
        flag=0;
        printf("Insere 1 numero valido:");
        fgets(n,30,stdin);
        n[strcspn(n,"\n")]='\0';
        for (int i=0; i<strlen(n); i++)
        {
            if (isdigit(n[i])==0)
            {
                printf("Erro!\n");
                flag=0;
                break;
            }else
            {
                numeros[i]=n[i]-'0';
                flag++;
            }
        }
    }while (flag==0 || flag != 5);
    for (int i= 0; i<5; i++)
    printf("%d válido\n",numeros[i]);

    getchar ();
    return 0;
}