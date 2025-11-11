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

int contarvogais (char texto[], char *p)
{
    int i;
    char * aux = p;
    while (*aux != '\0')
    {
        if (*aux == 97 || *aux == 101|| *aux == 105 || *aux == 111 || *aux == 117 || *aux ==  65|| *aux == 69 || *aux == 73 || *aux == 79 || *aux == 85)
        {
            i++;
        }
        aux ++;
    }
    return i;
}

int main()
{
    char texto[T] = "fAbIocOutAdaAA";
    char * p;
    p=texto;
    printf("A string %s tem %zu carateres\n", texto, contarcarateres(texto, p));
    printf("A string %s tem %d vogais\n", texto, contarvogais(texto, p));

    getchar();

    return 0;
}