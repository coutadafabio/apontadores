#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int numeros[5];
    char n[30];
    int flag;
    int soma = 0;
    int maior = 0;
    int c = 0;

    while (c < 5)
    { 
        flag = 1; // assume válido até provar o contrário
        printf("Insere %d numero valido: ", c + 1);
        
        fgets(n, sizeof(n), stdin);
        n[strcspn(n, "\n")] = '\0'; // remover \n

        // Validar cada char da string
        for (int i = 0; i < strlen(n); i++)
        {
            if (!isdigit(n[i]))
            {
                printf("Erro! Insira apenas dígitos.\n");
                flag = 0;
                break;
            }
        }

        // Se válido, converter e guardar
        if (flag == 1)
        {
            // Converter string para inteiro
            numeros[c] = atoi(n);
            c++;
        }
    }

    // Usar ponteiro para somar e encontrar maior
    for (int *p = numeros; p < &numeros[5]; p++)
    {
        soma += *p;
        if (*p > maior)
        {
            maior = *p;
        }
    }

    printf("Soma: %d; Maior: %d\n", soma, maior);
    return 0;
}


