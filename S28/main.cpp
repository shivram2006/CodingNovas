#include <iostream>
using namespace std;

// Class demonstrating abstraction
class BankAccount {
private:
    double balance;  // hidden from user

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0;
    }

    // Public function to deposit money
    void deposit(double amount) {
        balance += amount;
    }

    // Public function to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount user;

    user.deposit(5000);  // user interacts with function only

    cout << "Your Balance: " << user.getBalance();

    return 0;
}