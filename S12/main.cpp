#include <iostream>
using namespace std;

int main()
{

    // 1. Create an array and print
    /*
    Create an array and print its elements
    Example:
    10 20 30 40 50
    */

    cout << "Question 1\n";

    int arr1[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << "========" << endl;

    // 2. Take input in array and print
    /*
    Take 5 elements as input from the user
    and print them
    */

    cout << "Question 2\n";

    int arr2[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }

    cout << "Array elements are: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
    cout << "========" << endl;

    // 3. Sum of all elements of array
    /*
    Find the sum of all elements in an array
    */

    cout << "Question 3\n";

    int arr3[5] = {5, 10, 15, 20, 25};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr3[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}