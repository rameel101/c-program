#include <stdio.h>

int main() {
    int num1, num2, num3, num4, greatest;

    // Input four numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    printf("Enter fourth number: ");
    scanf("%d", &num4);

    // Assume first number is greatest
    greatest = num1;

    // Compare with second number
    if (num2 > greatest) {
        greatest = num2;
    }

    // Compare with third number
    if (num3 > greatest) {
        greatest = num3;
    }

    // Compare with fourth number
    if (num4 > greatest) {
        greatest = num4;
    }

    printf("The greatest number among %d, %d, %d, and %d is: %d\n", num1, num2, num3, num4, greatest);

    return 0;
}
