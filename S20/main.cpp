#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,3,5,7,6,4,2};
    int n = 7;

    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        int mid = (left + right) / 2;

        // If mid element is smaller than next element
        // Peak lies on right side
        if(arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }

        // Otherwise peak is on left side
        else
        {
            right = mid;
        }
    }

    // left will point to peak element
    cout << "Peak index: " << left;
    cout << "\nPeak element: " << arr[left];

    return 0;
}