#include<stdio.h>
int main()
{
    int x, i;
    printf("Enter the value :");
    scanf("%d", &x);

    printf("Divisor of %d : ",x);
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
