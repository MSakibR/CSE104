#include <stdio.h>

float area(float x, float y)
{

    return 0.5*x*y;
}

int main()
{
    float x,y;

    printf("base = ");
    scanf("%f",&x);

    printf("Height = ");
    scanf("%f",&y);

    float ans = area(x,y);
    printf("Area = %.2f", ans);
}
