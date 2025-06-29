#include <stdio.h>

int main() {
    int amount, notes;
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};  // Array to store number of notes for each denomination

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < 10; i++) {
        if (amount >= denominations[i]) {
            count[i] = amount / denominations[i];
            amount = amount - (count[i] * denominations[i]);
        }
    }

    printf("Currency Note Count:\n");
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("%d : %d\n", denominations[i], count[i]);
        }
    }

    return 0;
}
