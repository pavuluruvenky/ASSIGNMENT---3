#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                // Shift all elements to the left to overwrite the duplicate element
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Decrease the size of the array after removing the duplicate element
            } else {
                j++; // Move to the next element if no duplicate is found
            }
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

    printf("Array elements before removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to remove duplicates from the array
    removeDuplicates(arr, n);

    printf("Array elements after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
