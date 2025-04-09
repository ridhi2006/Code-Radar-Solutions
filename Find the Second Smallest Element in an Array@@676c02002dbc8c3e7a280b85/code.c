#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int secondMin = INT_MAX;
    int found = 0;  // flag to check if a different element exists

    for (int i = 0; i < n; i++) {
        if (arr[i] != min) {
            found = 1;
            if (arr[i] < secondMin) {
                secondMin = arr[i];
            }
        }
    }

    if (!found) {
        // All elements are the same
        printf("-1\n");
    } else {
        printf("%d\n", secondMin);
    }

    return 0;
}

