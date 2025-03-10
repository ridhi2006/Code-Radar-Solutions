#include <stdio.h>
#include <string.h>

int main() {
    char string[100], result[100];
    int j = 0;

    // Read input string
    fgets(string, sizeof(string), stdin);

    // Iterate through the string
    for (int i = 0; string[i] != '\0'; i++) {
        char ch = string[i];

        // Check if it's a vowel (lowercase or uppercase) or a non-alphabet character
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            (ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z')) {
            result[j++] = ch;
        }
    }

    // Null terminate the modified string
    result[j] = '\0';

    // Print the result
    printf("%s", result);

    return 0;
}