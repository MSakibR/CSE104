#include <stdio.h>

int main()
{
    int x,i,sum;
    printf("Enter a value: ");
    scanf("%d", &x);

    i=0;
    do
    {
        i++;
        sum = i*x;
        printf("%d No. Multiplier of %d: %d\n", i, x, sum);
    }
    while(i<x);

}

