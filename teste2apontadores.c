#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#define T 30

int a;
int b;

void swap (int * ptr1, int * ptr2)
{
    int aux = *ptr1;
    a = *ptr2;
    b = aux;
    printf("A: %d; B: %d (depois troca)\n", a,b);
}

int main()
{
    
    int flag = 0;
    char numeros [T];
    int * ptr1;
    int * ptr2;
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
    printf("A: %d; B: %d (antes troca)\n", a, b);
    ptr1 = &a;
    ptr2 = &b;
    swap(ptr1,ptr2);
    getchar();
    return 0;
}