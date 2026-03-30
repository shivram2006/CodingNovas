# 🎭 Abstraction in C++ (OOP)

## 📌 Overview

Abstraction means hiding internal implementation details and showing only the necessary features to the user.

---

## 🧠 What is Abstraction?

👉 In simple words:
**"User ko sirf zaroori cheez dikhao, andar ka complex logic chhupa do"**

---

## 🌍 Real-Life Example

* Car 🚗
  👉 You drive (accelerate, brake)
  ❌ You don’t know engine internals

---

## 🔑 How to Achieve Abstraction in C++?

1. Using **Classes**
2. Using **Access Specifiers (private, public)**
3. Using **Abstract Classes (advanced)**

---

# 💻 Code Example (Simple Abstraction)

```cpp id="abs1"
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // hidden data

public:
    // Set balance (controlled access)
    void deposit(double amount) {
        balance += amount;
    }

    // Get balance (read-only access)
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(1000);  // user doesn’t know internal logic

    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}
```

---

## 🔍 Explanation

👉 `balance` is **private**
= user direct access nahi kar sakta

👉 `deposit()`
= controlled way to modify data

👉 `getBalance()`
= safe way to access data

---

# 🚀 Example 2 (Better Understanding)

```cpp id="abs2"
class Car {
public:
    void start() {
        cout << "Car started" << endl;
    }
};
```

👉 User just calls:

```cpp id="abs3"
Car c;
c.start();
```

👉 Internal engine logic hidden ✔️

---

## ⚙️ Benefits of Abstraction

* Security 🔒
* Code simplicity
* Easy maintenance
* Real-world modeling

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand abstraction concept
* Hide implementation details
* Use private & public properly
* Write clean OOP code

---

## 💡 Pro Tip

👉 Always keep important data **private**
👉 Access through functions

---

## 🏁 Conclusion

Abstraction helps in reducing complexity and improving security by exposing only essential parts of the program.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
