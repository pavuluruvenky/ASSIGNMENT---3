#include <stdio.h>

void sortDescending(int arr[], int n) {
    // Using bubble sort algorithm to sort the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Swap if current element is less than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The numbers arranged in descending order are given below:\n");
    sortDescending(arr, n); // call function to sort array in descending order

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
