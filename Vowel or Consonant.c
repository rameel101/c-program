#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: space before %c handles any leftover newline

    // Check if it is a letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is a letter.\n", ch);

        // Convert uppercase to lowercase for easy comparison
        char lower_ch = ch;
        if (ch >= 'A' && ch <= 'Z') {
            lower_ch = ch + 32;
        }

        // Check vowel or consonant
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
            lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }

    } else {
        printf("%c is NOT a letter.\n", ch);
    }

    return 0;
}

