#include <iostream>
using namespace std;

int main() {

    // Given array
    int arr[] = {2, 7, 11, 15};
    
    // Size of array
    int n = 4;

    // Target value whose pair we want
    int target = 9;

    // We use two loops to check every possible pair
    for(int i = 0; i < n; i++) {

        // Second loop starts from i+1 to avoid checking same element again
        for(int j = i + 1; j < n; j++) {

            // Check if sum of two numbers equals target
            if(arr[i] + arr[j] == target) {

                // If condition is true print the pair
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }

    return 0;
}