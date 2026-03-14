#include <iostream>
using namespace std;

int main() {

    int arr[] = {0,1,0,3,12};
    int n = 5;

    // Pointer to track position of non-zero element
    int j = 0;

    // Traverse array
    for(int i = 0; i < n; i++) {

        // If element is not zero
        if(arr[i] != 0) {

            // Swap current element with position j
            swap(arr[i], arr[j]);

            // Move j forward
            j++;
        }
    }

    // Print modified array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}