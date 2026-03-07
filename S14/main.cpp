#include <iostream>
using namespace std;

int main()
{

    // 8. Dutch National Flag Problem (Easy Method)
    /*

    Dutch National Flag Problem

    Array contains only:
    0, 1, 2

    Goal:
    Sort the array.

    Example

    Input:
    2 0 1 2 1 0

    Output:
    0 0 1 1 2 2


    Logic (Beginner Friendly)

    Step 1:
    Count how many 0s, 1s and 2s are present

    Step 2:
    Fill the array again

    First put all 0s
    Then put all 1s
    Then put all 2s

    */

    cout << "Dutch National Flag Problem\n";

    int arr[6] = {2, 0, 1, 2, 1, 0};

    int zero = 0;
    int one = 0;
    int two = 0;

    // Step 1: Count frequency

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
            zero++;

        else if (arr[i] == 1)
            one++;

        else
            two++;
    }

    // Step 2: Fill the array again

    int index = 0;

    // Fill all 0s
    for (int i = 0; i < zero; i++)
    {
        arr[index] = 0;
        index++;
    }

    // Fill all 1s
    for (int i = 0; i < one; i++)
    {
        arr[index] = 1;
        index++;
    }

    // Fill all 2s
    for (int i = 0; i < two; i++)
    {
        arr[index] = 2;
        index++;
    }

    // Print sorted array

    cout << "Sorted Array: ";

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}