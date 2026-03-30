#include <iostream>
using namespace std;

// =====================================================
// 🔵 COMPILE-TIME POLYMORPHISM (FUNCTION OVERLOADING)
// Real-life: Payment system (different payment methods)
// =====================================================
class PaymentSystem {

public:

    // 💵 Cash Payment
    void pay(int amount) {
        cout << "[Cash Payment] Amount Paid: " << amount << endl;
    }

    // 💳 Card Payment
    void pay(int amount, string cardType) {
        cout << "[Card Payment] Amount: " << amount 
             << " via " << cardType << " card" << endl;
    }

    // 📱 UPI Payment
    void pay(string upiID, int amount) {
        cout << "[UPI Payment] Amount: " << amount 
             << " via UPI ID: " << upiID << endl;
    }
};

// =====================================================
// 🔴 RUN-TIME POLYMORPHISM (FUNCTION OVERRIDING)
// Real-life: Different employees doing different work
// =====================================================

// ================= BASE CLASS =================
class Employee {

public:
    // Virtual function (important for runtime polymorphism)
    virtual void work() {
        cout << "Employee is working..." << endl;
    }

    // Virtual destructor (good practice)
    virtual ~Employee() {}
};

// ================= DERIVED CLASS 1 =================
class Developer : public Employee {

public:
    void work() override {
        cout << "Developer is writing code 💻" << endl;
    }
};

// ================= DERIVED CLASS 2 =================
class Designer : public Employee {

public:
    void work() override {
        cout << "Designer is designing UI 🎨" << endl;
    }
};

// ================= DERIVED CLASS 3 =================
class Manager : public Employee {

public:
    void work() override {
        cout << "Manager is managing team 📊" << endl;
    }
};

// =====================================================
// 🔵 MAIN FUNCTION
// =====================================================
int main() {

    cout << "========== COMPILE-TIME POLYMORPHISM ==========\n";

    PaymentSystem p;

    // Same function name, different behaviors
    p.pay(500);                         // Cash
    p.pay(1000, "Credit");              // Card
    p.pay("shiv@upi", 300);             // UPI

    cout << "\n========== RUN-TIME POLYMORPHISM ==========\n";

    // Base class pointer
    Employee* emp;

    Developer d;
    Designer des;
    Manager m;

    // 🔥 Runtime decision (dynamic binding)
    emp = &d;
    emp->work();   // Developer version

    emp = &des;
    emp->work();   // Designer version

    emp = &m;
    emp->work();   // Manager version

    return 0;
}