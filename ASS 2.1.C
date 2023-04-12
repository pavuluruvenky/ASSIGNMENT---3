#include <stdio.h>

int main() {
    int Arr[5] = {12, 56, 34, 78, 100};
    int largest = Arr[0]; // Assume the first element is the largest

    // Iterate through the array to find the largest element
    for (int i = 1; i < 5; i++) {
        if (Arr[i] > largest) {
            largest = Arr[i]; // Update the largest value
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}

