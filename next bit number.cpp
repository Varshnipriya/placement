#include <stdio.h>
#include <math.h>

int nextPowerOf2(int n) {
    int p = 1;
    while (p < n) {
        p <<= 1;
    }
    return p;
}
void nextBitNumber(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int next_bit = nextPowerOf2(arr[i]);
        printf("Next bit number of %d is %d\n", arr[i], next_bit);
    }
}

int main() {
    int arr[] = {5, 12, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    nextBitNumber(arr, size);

    return 0;
}

