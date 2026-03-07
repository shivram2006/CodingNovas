#include<iostream>
using namespace std;

int main()
{

    // cout << "Hello World" << endl;
    // cout << "Hello World" << endl;
    // cout << "Hello World" << endl;
    // cout << "Hello World" << endl;
    // cout << "Hello World" << endl;

    // int i = 5;
    // cout << ++i << endl;
    // cout << i;





    // int x = 7;

    // x++;
    // ++x;
    // cout << x++ << endl;
    // cout << ++x;

    // int n;
    // cout << "Enter a value : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     cout << i << endl;
    
    // }

    // int n ;
    // cout << "ENter any value : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     if(i % 2 == 0){
        //         cout << i << endl;
        //     }
        // }
        
        int n ;
        cout << "Enter any value : ";
        cin >> n;
        int s = 0;
        for (int i = 1; i <= n; i++){
            s = s + i;
        }
        cout << s;

        return 0;
}