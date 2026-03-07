// 4. Product of array
/*
Find the product of all elements in an array
Example:
1 2 3 4
Product = 24
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Question 4\n";

    int arr[5] = {1, 2, 3, 4, 5};
    int product = 1;

    for (int i = 0; i < 5; i++)
    {
        product = product * arr[i];
    }

    cout << "Product = " << product << endl;

    cout << "========" << endl;

    // 5. Maximum in array
    /*
    Find the largest element in an array
    */

    cout << "Question 5\n";

    int arr2[5] = {12, 45, 7, 89, 34};
    int max = arr2[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr2[i] > max)
        {
            max = arr2[i];
        }
    }

    cout << "Maximum = " << max << endl;

    cout << "========" << endl;

    // 6. Minimum in array
    /*
    Find the smallest element in an array
    */

    cout << "Question 6\n";

    int arr3[5] = {12, 45, 7, 89, 34};
    int min = arr3[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr3[i] < min)
        {
            min = arr3[i];
        }
    }

    cout << "Minimum = " << min << endl;

    return 0;
}