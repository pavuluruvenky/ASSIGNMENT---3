#include <stdio.h>

void separateEvenOdd(int arr[], int n, int even[], int odd[], int *evenSize, int *oddSize) {
    *evenSize = 0;
    *oddSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[*evenSize] = arr[i];
            (*evenSize)++;
        } else {
            odd[*oddSize] = arr[i];
            (*oddSize)++;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even[n], odd[n];
    int evenSize, oddSize;

    // Call the function to separate even and odd elements
    separateEvenOdd(arr, n, even, odd, &evenSize, &oddSize);

    printf("Even elements: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
