#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {  // Swap if out of order
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Finding the median
    double median;
    if (n % 2 == 1) {
        median = arr[n / 2];  // Middle element for odd n
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;  // Average of two middle elements for even n
    }

    printf("Median: %.1f\n", median);
    
    return 0;
}
