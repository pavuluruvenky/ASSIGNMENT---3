#include <stdio.h>

void findLargestTwo(int arr[], int n) {
    int firstLargest = arr[0];
    int secondLargest = arr[1];

    // Find the largest and second largest elements
    for (int i = 2; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < firstLargest) {
            secondLargest = arr[i];
        }
    }

    printf("The FIRST LARGEST = %d\n", firstLargest);
    printf("THE SECOND LARGEST = %d\n", secondLargest);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLargestTwo(arr, n);

    return 0;
}
