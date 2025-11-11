#include <stdio.h>
#include <stdlib.h>

void calcminmax(int * p1, int n)
{
    int max=0;
    int min = *p1;
    for (int i= 0; i<=n-1; i++)
    {
        if (*p1 > max)
        {
            max = *p1;
        }
        if (*p1<min)
        {
            min = *p1;
        }
        p1++;
    }
    printf("Max: %d ; MMin: %d", max, min);
}

int main()
{
    int n=5;
    int a[5] = {35,26,79,897,50};
    int * p1 = a;
    calcminmax (p1,n);
    getchar ();
    return 0;
}