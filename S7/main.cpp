#include <iostream>
using namespace std;

int main()
{

    
    // int prod = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     prod = prod * i;
    // }
    
    // cout << prod;
    
    
    
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = 0;
    while(n > 0){
        int lastBit = n % 10;
        sum = sum + lastBit;
        n = n / 10;
    }



    cout << sum;

    return 0;
}