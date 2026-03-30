# 🤝 Friend Function in C++ (OOP)

## 📌 Overview

A friend function is a function that is **not a member of a class**, but it can access the **private and protected members** of that class.

---

## 🧠 Simple Definition

👉 **"Outside function jo class ke private data ko access kar sake"**

---

## 🌍 Real-Life Example

Bank System 🏦

👉 Customer → apna balance directly nahi dekh sakta (private)
👉 Auditor → special permission hoti hai ✔

👉 Auditor = Friend Function

---

# 💻 Complete Code (Highly Descriptive + Commented)

```cpp id="ff1"
#include <iostream>
using namespace std;

// Forward declaration
class BankAccount;

// ================= FRIEND FUNCTION DECLARATION =================
void auditAccount(BankAccount obj);

// ================= CLASS DEFINITION =================
class BankAccount {

private:
    double balance;   // 🔒 Private data

public:

    // Constructor
    BankAccount(double b) {
        balance = b;
    }

    // Friend function declaration
    friend void auditAccount(BankAccount obj);
};

// ================= FRIEND FUNCTION =================
void auditAccount(BankAccount obj) {

    // Accessing private data directly
    cout << "Auditor Accessing Balance: " << obj.balance << endl;
}

// ================= MAIN FUNCTION =================
int main() {

    BankAccount user(5000);

    // ❌ Not allowed (private)
    // cout << user.balance;

    // ✅ Allowed via friend function
    auditAccount(user);

    return 0;
}
```

---

# 🔍 Key Understanding

## 🔒 Private Data

```cpp id="ff2"
double balance;
```

👉 Normal function access nahi kar sakta

---

## 🤝 Friend Function

```cpp id="ff3"
friend void auditAccount(BankAccount obj);
```

👉 Special permission di gayi

---

## 🔓 Direct Access

```cpp id="ff4"
obj.balance
```

👉 Allowed inside friend function

---

# ⚠️ Important Points

✔ Friend function class ka member nahi hota
✔ But private data access kar sakta hai
✔ It breaks strict encapsulation (controlled use)

---

# 🎯 Learning Outcome

After completing this module, you will:

* Understand friend functions
* Access private data externally
* Use special access when required
* Answer interview questions confidently

---

# 💡 Pro Tip (Interview Line)

👉 “Friend function allows external access to private data while maintaining controlled design.”

---

# 🏁 Conclusion

Friend functions provide special access to class internals, useful in scenarios where controlled external interaction is needed.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
