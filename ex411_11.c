#include <stdio.h>
#include <stdlib.h>

int calculaiva (int p, int taxa, int * i)
{
    *i = p * taxa/100;
    if (*i >0)
    {
        return 1;
    }
}
    

int main()
{
    int p=0;
    int taxa;
    int iva;
    int *i= &iva;
    printf("Insira o preco:");
    scanf("%d",&p);
    printf("Insira a taxa de iva:");
    scanf("%d",&taxa);
    if (calculaiva(p, taxa, i)==1)
    {
        printf("O valor do iva %d\n", iva);
    }else
    {
        printf("Erro!");
    }

    getchar();
    return 0;

}