#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
