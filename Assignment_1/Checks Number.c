#include <stdio.h>

int main()
{
    int x, i = 0;
    printf("Enter the number : ");
    scanf("%d", &x);

    while (i <= x)
    {

        if (i == 0)
        {
            printf("Number %d is equal to 0\n", i);
        }
        else if (i > 0)
        {
            printf("Number %d is positive\n", i);
        }
        else
        {
            printf("Number %d is negative\n", i);
        }

        i++;

    }

    return 0;
}
