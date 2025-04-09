#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[1001] = {0};  // Adjust size based on input constraints

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 1, mostRepeating = -1;

    for (int i = 0; i < 1001; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostRepeating = i;
        }
    }

    printf("%d\n", mostRepeating);
    return 0;
}


