#include <stdio.h>

int main() {
    int i, j;

    printf("5x5 Rectangle of Zeros:\n");

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
