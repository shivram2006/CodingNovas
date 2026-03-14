#include <iostream>
using namespace std;

int main() {

    int n = 20; // Range of numbers

    // Loop from 1 to n
    for(int i = 1; i <= n; i++) {

        // Check if number divisible by both 3 and 5
        if(i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }

        // Check if divisible by 3
        else if(i % 3 == 0) {
            cout << "Fizz" << endl;
        }

        // Check if divisible by 5
        else if(i % 5 == 0) {
            cout << "Buzz" << endl;
        }

        // If none of the above conditions are true
        else {
            cout << i << endl;
        }
    }

    return 0;
}