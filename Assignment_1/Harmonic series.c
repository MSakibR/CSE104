#include <stdio.h>

int main()
{
    int x;
    printf("Enter value x: ");
    scanf("%d", &x);
    printf("Harmonic series up to %d:\n", x);

    for (int i = 1; i <= x; i++)
    {
        if (i != x)
        {
            printf("1/%d + ", i);
        }
        else
        {
            printf("1/%d", i);
        }
    }

}
