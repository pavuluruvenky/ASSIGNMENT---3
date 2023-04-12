#include <stdio.h>

int minJumps(int arr[], int n) {
    if (n <= 1) {
        return 0; // If the array has only one element, no jumps are needed
    }

    if (arr[0] == 0) {
        return -1; // If the first element is 0, the end is not reachable
    }

    int jumps = 1; // Minimum number of jumps to reach the end
    int maxReach = arr[0]; // Maximum reachable index from the current index
    int steps = arr[0]; // Number of steps remaining from the current index

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return jumps; // Reached the end of the array
        }

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];

        steps--;

        if (steps == 0) {
            jumps++;

            if (i >= maxReach) {
                return -1; // If no further progress can be made, return -1
            }

            steps = maxReach - i;
        }
    }

    return -1; // If the end is not reached, return -1
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int jumps = minJumps(arr, n);
    if (jumps == -1) {
        printf("The end is not reachable.\n");
    } else {
        printf("Minimum number of jumps to reach the end: %d\n", jumps);
    }

    return 0;
}
