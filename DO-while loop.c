#include <stdio.h>

int main() {
    int i = 1;

    printf("Numbers from 1 to 100 using do-while loop:\n");

    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");

    return 0;
}
