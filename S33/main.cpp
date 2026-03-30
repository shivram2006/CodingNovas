#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:

    // Parameterized constructor
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    // Deposit
    void deposit(double amount) {
        balance += amount;
    }

    // Display
    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {

    // Account creation (constructor call)
    BankAccount user("Shiv", 1000);

    user.deposit(500);
    user.display();

    return 0;
}