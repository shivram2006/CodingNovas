#include <iostream>
using namespace std;

// ================= BANK ACCOUNT CLASS =================
class BankAccount {
private:
    double balance;  // Hidden data (user direct access nahi kar sakta)

public:
    // Constructor (initial balance set karne ke liye)
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Deposit function (money add karne ke liye)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    // Withdraw function (money nikalne ke liye)
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Balance check (read-only access)
    double getBalance() {
        return balance;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // Real-life scenario: Ek user bank account open karta hai
    BankAccount user(1000);  // Initial balance = 1000

    // User paise deposit karta hai
    user.deposit(500);

    // User paise withdraw karta hai
    user.withdraw(300);

    // Final balance check karta hai
    cout << "Final Balance: " << user.getBalance() << endl;

    return 0;
}