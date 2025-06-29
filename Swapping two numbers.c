#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // --- Swapping using a third variable ---
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping (using third variable):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Swap again WITHOUT using third variable to get original back
    num1 = num1 + num2;  // num1 = num1 + num2
    num2 = num1 - num2;  // num2 = (num1 + num2) - num2 => num1
    num1 = num1 - num2;  // num1 = (num1 + num2) - num1 => num2

    printf("\nAfter swapping again (without using third variable):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
