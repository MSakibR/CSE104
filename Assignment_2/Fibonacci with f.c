#include <stdio.h>

void fibonacci(int n)
{
    int x = 0, y = 1, z;

    printf("The Fibonacci Series: %d:\n", n);

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            z = i;
        }
        else
        {
            z = x + y;
            x = y;
            y = z;
        }
        printf("%d ", z);
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

