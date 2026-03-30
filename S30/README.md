# 🔐 Access Modifiers in C++ (public, private, protected)

## 📌 Overview

Access modifiers define **who can access data and functions** inside a class.

---

## 🧠 Types of Access Modifiers

| Modifier  | Access Level        |
| --------- | ------------------- |
| public    | Everywhere          |
| private   | Only inside class   |
| protected | Class + child class |

---

## 🌍 Real-Life Example (Bank Locker 🔒)

* public → Bank entrance (sab aa sakte hain)
* private → Locker (sirf owner access karega)
* protected → Family access (owner + children)

---

# 💻 Complete Code (Highly Descriptive + Commented)

```cpp id="am1"
#include <iostream>
using namespace std;

// ================= BASE CLASS =================
class BankAccount {

public:
    string accountHolder;  // 🌍 Public (sab access kar sakte hain)

protected:
    double totalBalance;   // 👨‍👦 Protected (child class access karega)

private:
    int pin;               // 🔒 Private (sirf isi class me use hoga)

public:

    // Constructor
    BankAccount(string name, double balance, int userPin) {
        accountHolder = name;
        totalBalance = balance;
        pin = userPin;
    }

    // Public function (safe access)
    void showDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << totalBalance << endl;
    }

    // Private data access via function
    bool verifyPin(int enteredPin) {
        return enteredPin == pin;
    }
};

// ================= CHILD CLASS =================
class SavingsAccount : public BankAccount {

public:
    // Constructor
    SavingsAccount(string name, double balance, int pin)
        : BankAccount(name, balance, pin) {}

    // Accessing protected member
    void addInterest() {
        totalBalance += 500;  // ✔ Allowed (protected)
        cout << "Interest added!" << endl;
    }

    void showUpdatedBalance() {
        cout << "Updated Balance: " << totalBalance << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // Object creation
    SavingsAccount user("Shiv", 1000, 1234);

    // PUBLIC access
    cout << "Account Holder: " << user.accountHolder << endl;

    // ❌ Not allowed (private)
    // user.pin = 9999;

    // ❌ Not allowed (protected)
    // user.totalBalance = 5000;

    // Access through functions
    user.showDetails();

    // Child class accessing protected data
    user.addInterest();
    user.showUpdatedBalance();

    return 0;
}
```

---

# 🔍 Key Understanding

## 🌍 Public

```cpp id="pub1"
string accountHolder;
```

👉 Kahin se bhi access ho sakta hai

---

## 🔒 Private

```cpp id="pri1"
int pin;
```

👉 Sirf class ke andar
👉 Security ke liye use hota hai

---

## 👨‍👦 Protected

```cpp id="pro1"
double totalBalance;
```

👉 Class + child class access kar sakte hain

---

# ⚖️ Summary Table

| Modifier  | Same Class | Child Class | Outside |
| --------- | ---------- | ----------- | ------- |
| public    | ✔          | ✔           | ✔       |
| protected | ✔          | ✔           | ❌       |
| private   | ✔          | ❌           | ❌       |

---

# 🎯 Learning Outcome

After completing this module, you will:

* Understand access control
* Use private for security
* Use protected in inheritance
* Write safe and structured code

---

# 💡 Pro Tip (Interview Line)

👉 “Private ensures data hiding, protected supports inheritance, and public provides interface access.”

---

# 🏁 Conclusion

Access modifiers control visibility and ensure proper security and structure in OOP programs.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
