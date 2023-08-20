
#include <stdio.h>

int sumOf(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    int result = sumOf(n);

    printf("Sum = %d\n", result);

    return 0;
}
