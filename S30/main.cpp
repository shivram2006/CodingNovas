#include <iostream>
using namespace std;

// ================= BASE CLASS =================
class BankAccount {

public:
    string accountHolder;   // 🌍 PUBLIC → Sab access kar sakte hain

protected:
    double balance;         // 👨‍👦 PROTECTED → Class + child class

private:
    int pin;                // 🔒 PRIVATE → Sirf isi class ke andar

public:

    // Constructor: account create karte waqt values set
    BankAccount(string name, double bal, int userPin) {
        accountHolder = name;
        balance = bal;
        pin = userPin;
    }

    // Public function to show details
    void showDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    // Private data ko access karne ka safe tarika
    bool verifyPin(int enteredPin) {
        return enteredPin == pin;
    }

    // Withdraw function (private pin internally use ho raha hai)
    void withdraw(double amount, int enteredPin) {
        if (!verifyPin(enteredPin)) {
            cout << "Incorrect PIN!" << endl;
            return;
        }

        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
};

// ================= CHILD CLASS =================
class SavingsAccount : public BankAccount {

public:
    // Constructor
    SavingsAccount(string name, double bal, int pin)
        : BankAccount(name, bal, pin) {}

    // Protected variable access (allowed)
    void addInterest() {
        balance += 500;   // ✔ Allowed (protected)
        cout << "Interest Added!" << endl;
    }

    void showBalance() {
        cout << "Updated Balance: " << balance << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // Object creation
    SavingsAccount user("Shiv", 1000, 1234);

    cout << "=== Bank System ===" << endl;

    // ✅ PUBLIC access
    cout << "Account Holder: " << user.accountHolder << endl;

    cout << endl;

    // ❌ NOT ALLOWED (private)
    // user.pin = 9999;

    // ❌ NOT ALLOWED (protected)
    // user.balance = 5000;

    // ✅ Access via public function
    user.showDetails();

    cout << endl;

    // Withdraw using PIN (private data indirectly used)
    user.withdraw(200, 1234);

    cout << endl;

    // Child class accessing protected member
    user.addInterest();
    user.showBalance();

    return 0;
}