#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting frequencies
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) // Skip already counted elements
            continue;

        int count = 1; // Reset count for each element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }
        printf("%d %d \n", arr[i], count);
    }

    return 0;
}
