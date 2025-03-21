#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if()

    // Frequency count using an array (assuming numbers are small)
    int max_count = 0, mostRepeating;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
            else{
                printf("-1");
            }
        }
        if (count > max_count) {
            max_count = count;
            mostRepeating = arr[i];
        }
    }

    printf("%d\n", mostRepeating);
    return 0;
}
