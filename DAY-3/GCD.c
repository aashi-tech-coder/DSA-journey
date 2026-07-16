#include <stdio.h>

int main() {
    int x, y, gcd;

    printf("Enter 1st numbers: ");
    scanf("%d", &x);
     printf("Enter 2st numbers: ");
    scanf("%d", &y);

    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;

    printf("GCD = %d", gcd);

    return 0;
}
