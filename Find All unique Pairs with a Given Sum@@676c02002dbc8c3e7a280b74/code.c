#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int t;
    scanf("%d", &t);

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] + arr[i + 1] == t) {
            printf("%d %d\n", arr[i], arr[i + 1]);
            return 0;
        }
    }

    // If no adjacent pair found
    printf("-1\n");
    return 0;
}
