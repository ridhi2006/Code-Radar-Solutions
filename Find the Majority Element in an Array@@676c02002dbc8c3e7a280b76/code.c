#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], freq[n];

    // Read input and initialize frequency array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Mark as uncounted
    }

    // Count occurrences of each element
    for (int i = 0; i < n; i++) {
        if (freq[i] != -1)  // Skip already counted elements
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Mark duplicate as counted
            }
        }
        freq[i] = count;  // Store count
    }

    // Find the first element appearing less than n/2 times
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0 && freq[i] < n / 2) {
            printf("%d", arr[i]); // Print the first valid element
            return 0; // Stop execution after the first valid element
        }
    }

    // If no element meets the condition, print -1
    printf("-1");
    return 0;
}
