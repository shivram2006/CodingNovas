#include <iostream>
using namespace std;

int main() {

    int num = 36;

    int left = 0;
    int right = num;

    int ans = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        // If mid * mid equals the number
        if(mid * mid == num)
        {
            cout << "Square root is: " << mid;
            return 0;
        }

        // If mid*mid smaller, move right
        else if(mid * mid < num)
        {
            ans = mid;
            left = mid + 1;
        }

        // If mid*mid greater
        else
        {
            right = mid - 1;
        }
    }

    cout << "Square root is: " << ans;

    return 0;
}