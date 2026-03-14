#include <iostream>
using namespace std;

int main() {

    // Sorted array (Binary Search only works on sorted arrays)
    int arr[] = {2,4,6,8,10,12,14};
    int n = 7;

    int target = 10;

    // Start and end pointers
    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        // Find middle index
        int mid = (left + right) / 2;

        // If target found
        if(arr[mid] == target)
        {
            cout << "Element found at index: " << mid;
            return 0;
        }

        // If target is greater, search in right half
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }

        // If target is smaller, search in left half
        else
        {
            right = mid - 1;
        }
    }

    // If element not found
    cout << "Element not found";

    return 0;
}