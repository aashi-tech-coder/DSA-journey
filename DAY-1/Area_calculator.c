#include <stdio.h>

int main() {
    int choice;
    float length, width, side, radius, area;

    printf(" Area Calculator\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 2:
            printf("Enter side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 3:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
