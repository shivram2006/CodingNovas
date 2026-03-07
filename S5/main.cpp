#include <iostream>
using namespace std;

int main()
{

    //     int n;
    //     cout << "Enter the  num1 : ";
    //     cin >> n;

    //     if (n % 3 == 0 && n % 5 == 0)
    //     {
    //         cout << "FizzBuzz";
    //     }
    // else if(n % 5 == 0){
    // cout << "Buzz";
    // }
    // else if(n % 3 == 0){
    // cout << "Fizz";
    // }
    // else{
    //     cout << "Invalid";
    // }

    int marks;
    cout << "Enter Your marks : ";
    cin >> marks;

    if (marks <= 100 && marks >= 80)
    {
        cout << "Grade A";
    }
    else if (marks < 80 && marks >= 60)
    {
        cout << "Grade B";
    }
    else if (marks < 60 && marks >= 50)
    {
        cout << "Grade C";
    }
    else if (marks < 50 && marks >= 40)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Try Again";
    }

    return 0;
}