#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    // Outer loop: controls number of passes
    // After each pass, one largest element gets fixed at the end
    for (int i = 0; i < n - 1; i++) {

        // Flag to check if swapping happens
        // If no swapping → array is already sorted
        bool isSwapped = false;

        // Inner loop: compares adjacent elements
        for (int j = 0; j < n - i - 1; j++) {

            // Compare current element with next element
            if (arr[j] > arr[j + 1]) {

                // Swap if elements are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Mark that swapping happened
                isSwapped = true;
            }
        }

        // Optimization:
        // If no swapping happened in this pass,
        // array is already sorted → break early
        if (isSwapped == false) {
            break;
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 1};
    int n = 5;

    // Call bubble sort function
    bubbleSort(arr, n);

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}