#include <stdio.h>

int main() {
    char string[100];
    
    // Read input string
    fgets(string, sizeof(string), stdin);

    // Process the string
    for (int i = 0; string[i] != '\0'; i++) {
        int isDuplicate = 0;
        
        // Check if string[i] appeared before
        for (int j = 0; j < i; j++) {
            if (string[i] == string[j]) {
                isDuplicate = 1; // Found a duplicate
                break;
            }
        }
        
        // Print character or '-'
        if (isDuplicate) {
            printf("-");
        } else {
            printf("%c", string[i]);
        }
    }

    return 0;
}
