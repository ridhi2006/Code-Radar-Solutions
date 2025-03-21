#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Find the majority candidate
    int majority = arr[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == majority)
            count++;
        else
            count--;

        if (count == 0) {
            majority = arr[i];
            count = 1;
        }
    }

    // Step 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] ==majority)
            count++;
    }

    // Step 3: Print the result
    if (count > n / 2)
        printf("%d\n", majority);
    else
        printf("-1\n");

    return 0;
}
