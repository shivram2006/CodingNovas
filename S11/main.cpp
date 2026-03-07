#include <iostream>
using namespace std;

int main()
{

    // Pattern 1
    /*
    ****
    ****
    ****
    ****
    */

    cout << "Pattern 1\n";

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "========\n";

    // Pattern 2
    /*
    *******
    *     *
    *     *
    *******
    */

    cout << "Pattern 2\n";

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << "========\n";

    // Pattern 3
    /*
     *
     **
     ***
     ****
     */

    cout << "Pattern 3\n";

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "========\n";

    // Pattern 4
    /*
    1111
    2222
    3333
    4444
    */

    cout << "Pattern 4\n";

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << "========\n";

    // Pattern 5
    /*
    1
    23
    456
    */

    cout << "Pattern 5\n";

    int num = 1;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}