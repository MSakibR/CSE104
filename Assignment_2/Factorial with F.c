#include <stdio.h>

int factorial(int x) {
    if (x < 0) {
        printf("Not Possible.\n");
        return 0;
    }

    if (x == 0 || x == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= x; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int x;
    printf("Enter a integer: ");
    scanf("%d", &x);

    int now = factorial(x);
    printf("!%d = %d\n", x, now);

    return 0;
}
