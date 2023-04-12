#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap the elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int isPalindromeArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Compare the elements at start and end indices
        if (arr[start] != arr[end]) {
            return 0; // Not a palindrome array
        }
        start++;
        end--;
    }
    return 1; // Palindrome array
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

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array
    reverseArray(arr, n);

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check if the reversed array is a palindrome array
    if (isPalindromeArray(arr, n)) {
        printf("The reversed array is a palindrome array.\n");
    } else {
        printf("The reversed array is not a palindrome array.\n");
    }

    return 0;
}
