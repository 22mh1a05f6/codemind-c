#include <stdio.h>

int isBinaryArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0 && arr[i] != 1) {
            return 0; // Not a binary array
        }
    }
    return 1; // Binary array
}

int main() {
    int N;

    // Read the length of the array
    scanf("%d", &N);

    int arr[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a binary array
    int isBinary = isBinaryArray(arr, N);

    // Print the result
    if (isBinary) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}