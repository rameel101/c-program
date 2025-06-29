#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare the two numbers
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else if (num1 > num2) {
        printf("First number (%d) is greater than second number (%d).\n", num1, num2);
    } else {
        printf("First number (%d) is less than second number (%d).\n", num1, num2);
    }

    return 0;
}
