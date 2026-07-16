#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, temp;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);

        temp = a + b;
        a = b;
        b = temp;
    }
