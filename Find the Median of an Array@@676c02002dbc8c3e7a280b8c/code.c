#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the median
    int median;
    if (n % 2 == 1) {
        median = arr[n / 2];  // Middle element for odd n
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2;  // Average of two middle elements for even n
    }

    printf("%d", median);
    
    return 0;
}
