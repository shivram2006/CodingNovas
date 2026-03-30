# 🔒 Encapsulation in C++ (Real-Life Example: Bank System)

## 📌 Overview

Encapsulation means wrapping data (variables) and methods (functions) together in a single unit (class) and restricting direct access to data.

---

## 🧠 Simple Definition

👉 **"Data ko hide karo + controlled access do"**

---

## 🌍 Real-Life Example

ATM Machine 🏧

👉 Tum PIN dalte ho
👉 Paise nikalte ho
❌ Tum directly account balance ko change nahi kar sakte

✔ Everything is controlled

---

# 💻 Complete Code (Highly Descriptive + Commented)

```cpp id="enc1"
#include <iostream>
using namespace std;

// ================= CLASS DEFINITION =================
class BankAccount {

private:
    double balance;   // 🔒 Private data (direct access not allowed)

public:

    // Constructor (account banate waqt initial balance set hota hai)
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // ================= FUNCTION: DEPOSIT =================
    void deposit(double amount) {

        // Validation: amount positive hona chahiye
        if (amount > 0) {
            balance += amount;  // balance update
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // ================= FUNCTION: WITHDRAW =================
    void withdraw(double amount) {

        // Check: sufficient balance hai ya nahi
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else {
            balance -= amount;  // balance update
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // ================= FUNCTION: GET BALANCE =================
    double getBalance() {
        return balance;  // read-only access
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // Real-life: User bank account create karta hai
    BankAccount user(1000);  // Initial balance = 1000

    cout << "Initial Balance: " << user.getBalance() << endl;

    cout << "\n--- Performing Transactions ---\n";

    // Deposit operation
    user.deposit(500);

    // Withdraw operation
    user.withdraw(300);

    // Invalid withdraw
    user.withdraw(2000);

    // Final balance
    cout << "\nFinal Balance: " << user.getBalance() << endl;

    return 0;
}
```

---

# 🔍 Key Understanding

## 🔒 Private Data

```cpp
double balance;
```

👉 Direct access allowed nahi hai
❌ `user.balance = 100000` (NOT allowed)

---

## 🔓 Controlled Access

```cpp
deposit()
withdraw()
getBalance()
```

👉 Sirf in functions ke through data access hoga

---

# ⚖️ Before vs After Encapsulation

❌ Without Encapsulation:

```cpp
balance = -5000;  // Galat value bhi set ho sakti hai
```

✅ With Encapsulation:

```cpp
withdraw(5000);  // Proper validation ke saath
```

---

# 🎯 Benefits

✔ Data security 🔒
✔ Validation control
✔ Clean & maintainable code
✔ Real-world system design

---

# 💡 Pro Tip (Interview Line)

👉 "Encapsulation ensures data hiding and controlled access through public methods."

---

# 🏁 Conclusion

Encapsulation protects data from unauthorized access and ensures that all operations happen in a controlled and safe manner.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
