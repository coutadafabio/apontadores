#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#define T 30

void swap (int * ptr1, int * ptr2)
{

}

int main()
{
    int a;
    int b;
    int flag = 0;
    char numeros [T];
    for (int c=1; c<3; c++)
    {
        do
        {
            printf("Insere o %d numero: ",c);
            fgets(numeros, T, stdin);
            numeros [strcspn(numeros,"\n")]='\0';
            for (int i =0; i<strlen(numeros); i++)
            {
                if (isdigit(numeros[i])==0)
            
                {
                    printf("Erro!\n");
                    flag = 0;
                    break;
                }else
                {
                    flag =1;
                
                }
            }
        
            if (flag==1 && c==1)
            {
                a = atoi(numeros);
            }else if(flag==1 && c==2)
            {
                b = atoi(numeros);
            }
        }while (flag == 0);
    }
    printf("%d numero 1; %d numero 2", a, b);
    getchar();
    return 0;
}