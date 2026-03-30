# 🏗️ Constructors in C++ (Real-Life Example)

## 📌 Overview

A constructor is a special function that is automatically called when an object is created.

---

## 🧠 Simple Definition

👉 **"Object banate hi jo function automatically call ho jaye"**

---

## 🌍 Real-Life Example

Bank Account 🏦

👉 Jab account create hota hai:

* Name set hota hai
* Balance set hota hai

👉 Ye kaam constructor karta hai

---

# 🔑 Types of Constructors

1. Default Constructor
2. Parameterized Constructor
3. Copy Constructor

---

# 💻 Complete Code (ALL TYPES + COMMENTS)

```cpp id="cons1"
#include <iostream>
using namespace std;

// ================= CLASS =================
class BankAccount {

private:
    string name;
    double balance;

public:

    // ================= DEFAULT CONSTRUCTOR =================
    // Automatically called when object is created (no parameters)
    BankAccount() {
        name = "Unknown";
        balance = 0;
        cout << "Default Constructor Called" << endl;
    }

    // ================= PARAMETERIZED CONSTRUCTOR =================
    // Used to initialize object with values
    BankAccount(string n, double b) {
        name = n;
        balance = b;
        cout << "Parameterized Constructor Called" << endl;
    }

    // ================= COPY CONSTRUCTOR =================
    // Copy data from another object
    BankAccount(BankAccount &obj) {
        name = obj.name;
        balance = obj.balance;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display data
    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    cout << "=== DEFAULT CONSTRUCTOR ===" << endl;
    BankAccount acc1;   // Default constructor called
    acc1.display();

    cout << "\n=== PARAMETERIZED CONSTRUCTOR ===" << endl;
    BankAccount acc2("Shiv", 5000);  // Parameterized
    acc2.display();

    cout << "\n=== COPY CONSTRUCTOR ===" << endl;
    BankAccount acc3 = acc2;  // Copy constructor
    acc3.display();

    return 0;
}
```

---

# 🔍 Key Understanding

## 🧱 Default Constructor

```cpp id="c1"
BankAccount()
```

👉 Automatic values assign karta hai

---

## ⚙️ Parameterized Constructor

```cpp id="c2"
BankAccount(string n, double b)
```

👉 User-defined values assign karta hai

---

## 📋 Copy Constructor

```cpp id="c3"
BankAccount(BankAccount &obj)
```

👉 Ek object ka data dusre me copy karta hai

---

# ⚠️ Important Notes

✔ Constructor ka naam class jaisa hota hai
✔ No return type
✔ Automatically call hota hai
✔ Object creation pe run hota hai

---

# 🎯 Learning Outcome

After completing this module, you will:

* Understand constructors
* Initialize objects properly
* Use copy logic
* Write cleaner OOP code

---

# 💡 Pro Tip (Interview Line)

👉 “Constructors are used to initialize objects automatically at the time of creation.”

---

# 🏁 Conclusion

Constructors simplify object initialization and ensure that objects start with valid data.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
