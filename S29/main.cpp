#include <iostream>
using namespace std;

// ================= BANK ACCOUNT CLASS =================
class BankAccount {
private:
    double balance;   // 🔒 Private variable (direct access not allowed)
    int pin;          // 🔒 Sensitive data (PIN)

public:

    // Constructor: account create karte waqt initial balance & PIN set
    BankAccount(double initialBalance, int userPin) {
        balance = initialBalance;
        pin = userPin;
    }

    // ================= FUNCTION: DEPOSIT =================
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // ================= FUNCTION: WITHDRAW =================
    void withdraw(double amount, int enteredPin) {

        // Step 1: PIN verification
        if (enteredPin != pin) {
            cout << "Incorrect PIN!" << endl;
            return;
        }

        // Step 2: Validation
        if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // ================= FUNCTION: CHECK BALANCE =================
    void checkBalance(int enteredPin) {

        // Security check
        if (enteredPin != pin) {
            cout << "Incorrect PIN! Access denied." << endl;
            return;
        }

        cout << "Current Balance: " << balance << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // Real-life: user bank account open karta hai
    BankAccount user(1000, 1234);  // balance = 1000, PIN = 1234

    cout << "=== Welcome to ATM System ===" << endl;

    // Deposit (no PIN needed)
    user.deposit(500);

    cout << endl;

    // Wrong PIN attempt
    user.withdraw(200, 1111);

    cout << endl;

    // Correct withdrawal
    user.withdraw(200, 1234);

    cout << endl;

    // Check balance with correct PIN
    user.checkBalance(1234);

    return 0;
}