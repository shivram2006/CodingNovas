#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 6};
    int n = 5;
    int target = 6;

    // Two pointers
    int left = 0;
    int right = n - 1;

    while(left < right) {

        // Calculate sum of two numbers
        int sum = arr[left] + arr[right];

        // If sum equals target
        if(sum == target) {
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            break;
        }

        // If sum is smaller move left pointer
        else if(sum < target) {
            left++;
        }

        // If sum is larger move right pointer
        else {
            right--;
        }
    }

    return 0;
}