#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;

    printf("Total marks: %d\n", total);

    return 0;
}
