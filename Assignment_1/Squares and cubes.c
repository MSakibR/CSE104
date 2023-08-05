#include <stdio.h>

int main()
{
    int i, j, square, cube;

    printf("Enter the value of : ");
    scanf("%d", &j);

    for(i=1; i<=j; i++)
    {
        square = i*i;
        cube = i*i*i;
        printf("Square and cube of %d : %d and %d\n", i, square, cube);
    }
}
