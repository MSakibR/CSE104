#include <stdio.h>

int testing(char x)
{
    x = tolower(x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        return 1;
    }
    else if (x >= 'a' && x <= 'z')
    {
        return 2;
    }
}

int main()
{
    char x;

    printf("Enter a character: ");
    scanf(" %c", &x);

    int result = testing(x);

    if (result == 1)
    {
        printf("vowel.\n", x);
    }
    else if (result == 2)
    {
        printf("consonant.\n", x);
    }
    else
    {
        printf("not a letter.\n", x);
    }

    return 0;
}
