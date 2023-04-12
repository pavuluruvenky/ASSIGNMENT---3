#include <stdio.h>

void countFrequency(int arr[], int n) {
    int frequency[n]; // array to store frequency of each element
    int visited[n]; // array to keep track of visited elements
    for (int i = 0; i < n; i++) {
        frequency[i] = 0; // initialize frequency array with 0
        visited[i] = 0; // initialize visited array with 0
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // if element is already visited, skip it
        }

        int count = 1; // initialize count with 1 for current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // increment count for each occurrence of the element
                visited[j] = 1; // mark element as visited
            }
        }
        frequency[i] = count; // store count in frequency array
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            printf("%d\t%d\n", arr[i], frequency[i]); // print element and its frequency
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

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countFrequency(arr, n); // call function to count frequency of each element

    return 0;
}
