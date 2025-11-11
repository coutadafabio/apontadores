#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const * argv[])
{

    for (int i=0; i<=argc-1; i++)
    {
        printf("%s\n", argv[i]);
    }
    

    getchar();
    return 0;
}