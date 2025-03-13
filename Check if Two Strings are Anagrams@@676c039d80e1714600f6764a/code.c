#include <stdio.h>
#include <string.h>

int main() {
    char string[100], string2[100];

    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove newline

    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';  // Remove newline

    if (strcmp(string, string2) == 0) {  
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
