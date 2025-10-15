#include <stdio.h>

// Function declaration
int findMax(int arr[], int n);
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n); // Function call
    printf("The greatest integer in the array is %d\n", max);
    return 0;
}
// Function definition
int findMax(int arr[], int n) {
    int i, max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max; 
}
