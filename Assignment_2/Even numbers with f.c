#include <stdio.h>

int area(int x)
{
    printf("Even Numbers: ");
    for(int i=1; 0<x; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            x--;
        }


    }

}

int main()
{
    int x;

    printf("n = ");
    scanf("%d",&x);

    area(x);

}

