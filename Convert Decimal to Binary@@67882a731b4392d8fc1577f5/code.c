#include <stdio.h>

void printBinary(int num) {
    int started = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit) started = 1; // skip leading 0s
        if (started) printf("%d", bit);
    }
    if (!started) printf("0"); // if number was 0
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    printBinary(n);
    return 0;
}