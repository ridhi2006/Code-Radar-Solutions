#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("-1\n");  // If there's only one element, no second max exists.
        return 0;
    }

    int max = arr[0], secondMax = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;  // Update second max before changing max
            max = arr[i];
        } else if (arr[i] < max && (secondMax == -1 || arr[i] > secondMax)) {
            secondMax = arr[i];
        }
    }

    if (secondMax == -1) {
        printf("-1\n");  // All elements are equal, no second max
    } else {
        printf("%d\n", secondMax);
    }

    return 0;
}
