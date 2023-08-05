#include <stdio.h>

int main()
{
    int x,sum = 0;


    printf("Enter the value of N: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i +=4)
    {
        sum = sum+i;
    }

    printf("sum of every second odd number from 1 to %d is: %d\n", x,sum);
}
