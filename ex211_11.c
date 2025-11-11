#include <stdio.h>
#include <stdlib.h>
#define T 30

int main()
{
    int numero;
    char a;
    char b[T];

    printf("Insere um numero:");
    scanf("%d", &numero);
    printf("Insere um carater:");
    scanf(" %c", &a);
    printf("Insere uma string:");
    scanf(" %s", &b);

    printf("Inteiro %d\n", numero);
    printf("caracter %c\n", a);
    printf("String %s\n", b);


    getchar();
    return 0;
}