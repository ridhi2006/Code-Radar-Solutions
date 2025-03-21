#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Removing trailing newline if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Compare strings
    if (strcmp(str1, str2) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
