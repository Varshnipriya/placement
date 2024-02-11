#include <stdio.h>

int main() {
    int n, diff, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the difference: ");
    scanf("%d", &diff);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] - arr[j] == diff || arr[j] - arr[i] == diff) {
                count++;
            }
        }
    }
    printf("Number of pairs with difference %d: %d\n", diff, count);

    return 0;
}

