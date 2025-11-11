#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 30

size_t contarcarateres(char texto[], char * p)
{
    size_t i=0;
    char * aux = p;
    while (*aux != '\0')
    {
        i++;
        aux++;
    }
    return i;

}

int main()
{
    char texto[T] = "123456789";
    char * p;
    p=texto;
    printf("A string %s tem %zu carateres", texto, contarcarateres(texto, p));

    getchar();
    return 0;
}