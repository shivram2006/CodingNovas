#include <iostream>
using namespace std;

int main()
{

    // 7. Reverse of array
    /*
    Reverse the elements of an array

    Example:
    1 2 3 4 5

    Output:
    5 4 3 2 1
    */

    cout << "Question 7\n";

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Reversed Array: ";

    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "========" << endl;

    

    // 9. Array is sorted or not
    /*
    Check whether the array is sorted in ascending order

    Example:
    1 2 3 4 5 → Sorted
    5 3 2 1 → Not Sorted
    */

    cout << "Question 9\n";

    int arr3[5] = {1, 2, 3, 4, 5};
    bool sorted = true;

    for (int i = 0; i < 4; i++)
    {
        if (arr3[i] > arr3[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}