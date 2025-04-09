#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        // Not enough elements to form a pair
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    int minDifference = INT_MAX;
    int num1, num2;

    for (int i = 0; i < n - 1; i++) {
        int difference = arr[i + 1] - arr[i];
        if (difference < minDifference) {
            minDifference = difference;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2);
    return 0;
}
