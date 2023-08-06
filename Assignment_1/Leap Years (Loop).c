#include <stdio.h>

int main()
{
    int x;
    printf("Enter value x: ");
    scanf("%d", &x);
    printf(" All Leap Years from 1 to N %d:\n", x);

    int i=0;
    while(i<x)
    {
        i++;
        if (i%4==0)
        {
            printf("%d\t", i);
        }
    }

}
