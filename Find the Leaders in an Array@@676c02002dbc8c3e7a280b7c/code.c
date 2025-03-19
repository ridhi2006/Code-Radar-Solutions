#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start from the last element, which is always a leader
    int maxRight = arr[n - 1];
    printf("%d ", maxRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d ", maxRight);
        }
    }

    return 0;
}
