# 🎭 Polymorphism in C++ (Very Detailed)

## 📌 Overview

Polymorphism means **"one name, many forms"**

👉 Same function → different behavior

---

## 🧠 Simple Definition

👉 **"Ek function alag-alag situations me alag behave kare"**

---

## 🌍 Real-Life Example

Payment System 💳

👉 `pay()` function:

* UPI → QR scan
* Card → swipe
* Cash → manual

👉 Same function name, different behavior

---

# 🔑 Types of Polymorphism

| Type         | Description                             |
| ------------ | --------------------------------------- |
| Compile-time | Function overloading                    |
| Run-time     | Function overriding (virtual functions) |

---

# 💻 1️⃣ COMPILE-TIME POLYMORPHISM (Function Overloading)

```cpp id="poly1"
#include <iostream>
using namespace std;

class Payment {

public:

    // Payment using cash
    void pay(int amount) {
        cout << "Paid " << amount << " using CASH" << endl;
    }

    // Payment using card
    void pay(int amount, string cardType) {
        cout << "Paid " << amount << " using " << cardType << " card" << endl;
    }

    // Payment using UPI
    void pay(string upiID, int amount) {
        cout << "Paid " << amount << " using UPI ID: " << upiID << endl;
    }
};

int main() {
    Payment p;

    p.pay(500);
    p.pay(1000, "Credit");
    p.pay("shiv@upi", 200);

    return 0;
}
```

---

## 🧠 Key Idea

👉 Same function name → different parameters

---

# 💻 2️⃣ RUN-TIME POLYMORPHISM (Function Overriding)

```cpp id="poly2"
#include <iostream>
using namespace std;

// ================= BASE CLASS =================
class Payment {
public:
    virtual void pay() {
        cout << "Generic Payment" << endl;
    }
};

// ================= DERIVED CLASS 1 =================
class UPI : public Payment {
public:
    void pay() override {
        cout << "Payment via UPI" << endl;
    }
};

// ================= DERIVED CLASS 2 =================
class Card : public Payment {
public:
    void pay() override {
        cout << "Payment via Card" << endl;
    }
};

// ================= MAIN =================
int main() {

    Payment* p;   // pointer to base class

    UPI u;
    Card c;

    p = &u;
    p->pay();   // UPI version called

    p = &c;
    p->pay();   // Card version called

    return 0;
}
```

---

## 🧠 Key Idea

👉 `virtual` → enable runtime decision
👉 `override` → redefine behavior
👉 Base pointer → child object

---

# ⚠️ Important Concepts

## 🔹 Early Binding (Compile-time)

```cpp id="pb1"
p.pay();
```

👉 Decide at compile time

---

## 🔹 Late Binding (Run-time)

```cpp id="pb2"
virtual function
```

👉 Decide at runtime

---

# ⚖️ Difference

| Feature | Compile-time | Run-time        |
| ------- | ------------ | --------------- |
| Binding | Early        | Late            |
| Method  | Overloading  | Overriding      |
| Speed   | Fast         | Slightly slower |

---

# 🎯 Learning Outcome

After completing this module, you will:

* Understand polymorphism deeply
* Implement overloading & overriding
* Use virtual functions
* Solve OOP interview problems

---

# 💡 Pro Tip (Interview Line)

👉 “Polymorphism allows the same interface to perform different actions based on context.”

---

# 🏁 Conclusion

Polymorphism improves flexibility and scalability in programs by allowing multiple behaviors through a single interface.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
