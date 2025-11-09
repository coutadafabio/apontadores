#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 30

int strlength(char * ptr1)
{
    int i=0;
    
    for (char *ptr2 = ptr1; *ptr2 != '\0' ; ptr2++)
    {
        i++;
    }
        return i;
}

char * strconcat (char * ptr1, char * ptr2)
{
    char * ptraux;
    int i=0;
    for(ptraux = ptr1; *ptraux != '\0'; ptraux++)
    {
        i++;
    }
    
        for (char * ptraux2 = ptr2; *ptraux2 != '\0'; ptraux2++)
        {
        
            *ptraux= *ptraux2;
            ptraux++;
            i++;
        }
        printf("%d",i);
        for (int c=i; c>0; c--)
        {
            ptraux--;
        }
    return ptraux;
}

int main()
{
    char str1[T];
    char str2[T];
    char * ptr1;
    char * ptr2;
    printf("Insira a primeira string:");
    fgets(str1, T,stdin);
    str1[strcspn(str1,"\n")]='\0';
    ptr1 = str1;
    printf("Insira a segunda string:");
    fgets(str2, T,stdin);
    str2[strcspn(str2,"\n")]='\0';
    ptr2 = str2;
    printf("tamanho da str1 %s : %d\n",str1,strlength(ptr1));
    printf("tamanho da str2 %s : %d\n",str2, strlength(ptr2));
    printf("concatenacao: %s ", (strconcat(ptr1,ptr2)));
    
    getchar();
    return 0;

}