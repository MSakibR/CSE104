#include <stdio.h>

int main()
{
    int age;

    while (1)
    {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age == 0)
        {
            printf("Exiting the program.\n");
            break;
        }
        else if (age >= 1 && age <= 3)
        {
            printf("Toddler\n");

        }
        else if (age >= 4 && age <= 9)
        {
            printf("Child\n");
        }
        else if (age >= 10 && age <= 12)
        {
            printf("Tween\n");
        }
        else if (age >= 13 && age <= 19)
        {
            printf("Teen\n");
        }
        else if (age >= 20 && age <= 24)
        {
            printf("Young Adult\n");
        }
        else
        {
            printf("Adult\n");
        }
    }


}
