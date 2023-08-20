#include <stdio.h>

int prime(int x)
{

    if (x % 2 == 0 || x % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= x; i ++)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return 0;
        }
    }
}

int main()
{
    int x;
    printf("Enter a integer: ");
    scanf("%d", &x);

    if (prime(x))
    {
        printf("%d is a prime number.\n", x);
    }
    else
    {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}
