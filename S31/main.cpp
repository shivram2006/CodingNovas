#include <iostream>
using namespace std;

class BankAccount;

// Friend function declaration
void compareAccounts(BankAccount a1, BankAccount a2);

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    // Friend function declaration
    friend void compareAccounts(BankAccount a1, BankAccount a2);
};

// Friend function definition
void compareAccounts(BankAccount a1, BankAccount a2) {

    cout << "Comparing Accounts..." << endl;

    if (a1.balance > a2.balance) {
        cout << "Account 1 has more balance" << endl;
    } else if (a2.balance > a1.balance) {
        cout << "Account 2 has more balance" << endl;
    } else {
        cout << "Both accounts have equal balance" << endl;
    }
}

int main() {

    BankAccount acc1(5000);
    BankAccount acc2(3000);

    compareAccounts(acc1, acc2);

    return 0;
}