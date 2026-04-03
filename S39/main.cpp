#include <iostream>
using namespace std;

// 1. Factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// 2. Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Sum of N numbers
int sum(int n) {
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

// 4. Reverse String
void reverseStr(string str, int i) {
    if (i < 0) return;
    cout << str[i];
    reverseStr(str, i - 1);
}

// 5. Palindrome Check
bool isPalindrome(string str, int start, int end) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    int choice;
    
    cout << "===== Recursion Examples =====\n";
    cout << "1. Factorial\n";
    cout << "2. Fibonacci\n";
    cout << "3. Sum of N numbers\n";
    cout << "4. Reverse String\n";
    cout << "5. Palindrome Check\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Factorial = " << factorial(n);
            break;
        }
        case 2: {
            int n;
            cout << "Enter position: ";
            cin >> n;
            cout << "Fibonacci = " << fibonacci(n);
            break;
        }
        case 3: {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Sum = " << sum(n);
            break;
        }
        case 4: {
            string str;
            cout << "Enter string: ";
            cin >> str;
            cout << "Reversed: ";
            reverseStr(str, str.length() - 1);
            break;
        }
        case 5: {
            string str;
            cout << "Enter string: ";
            cin >> str;
            if (isPalindrome(str, 0, str.length() - 1))
                cout << "Palindrome";
            else
                cout << "Not Palindrome";
            break;
        }
        default:
            cout << "Invalid choice!";
    }

    return 0;
}