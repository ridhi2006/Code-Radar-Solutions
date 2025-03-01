#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Checking for palindrome numbers
    for (int i = 0; i < n; i++) {
        int num = arr[i];

        if (num < 0) {  // Ignore negative numbers
            continue;
        }

        int original = num, reversed = 0, rem;

        while (num != 0) {
            rem = num % 10;
            reversed = reversed * 10 + rem;
            num /= 10;
        }

        if (original == reversed) {
            count++;
        }
    }

    printf("%d\n", count);  // Print total count of palindrome numbers
    return 0;
}
