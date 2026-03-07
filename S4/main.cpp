#include <iostream>
using namespace std;

int main()
{

    // // int age;
    // // cout << "Enter Your Age : ";
    // // cin >> age;

    // // if (age > 18)
    // // {
    // //     cout << "Your vote has accepted";
    // // }

    // // else if(age == 18){
    // //     cout << "Apna voter id banawa lo";
    // // }

    // // else
    // // {
    // //     cout << "Your vote has declined";
    // // }

    // int num1;
    // cout << "Enter num1 : ";
    // cin >> num1;

    // int num2;
    // cout << "Enter num2 : ";
    // cin >> num2;

    // int num3;
    // cout << "Enter num3 : ";
    // cin >> num3;

    // if(num1 > num2 && num1 > num3){
    //     cout << "N1 is Largest";
    // }

    // else if (num2 > num1 && num2 > num3)
    // {
    //     /* code */
    //     cout << "N2 is largest";
    // }

    // else{
    //     cout << "N3 is largest";

    // }

    // int n;
    // cout << "Enter any value : ";
    // cin >> n;

    // if((n%2) == 0){
    //     cout << "Even";

    // }
    // else{
    //     cout << "Odd";

    // }

    int n1;
    cout << "Enter num1 : ";
    cin >> n1;

    char ope;
    cout << "Enter an operation : ";
    cin >> ope;

    int n2;
    cout << "Enter num2 : ";
    cin >> n2;

    if (ope == '+')
    {
        cout << "The sum is : " << n1 + n2;
    }
    else if (ope == '-')
    {
        cout << "The sub is : " << n1 - n2;
    }
    else if (ope == '*')
    {
        cout << "The mul is : " << n1 * n2;
    }
    else if (ope == '/')
    {
        cout << "The div is : " << n1 / n2;
    }
    else
    {
        cout << "Invalid Inputs";
    }

    return 0;
}