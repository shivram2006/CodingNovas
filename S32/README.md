# 🧬 Inheritance in C++ (Real-Life Example: Company Employees)

## 📌 Overview

Inheritance allows one class (child) to acquire properties and behavior of another class (parent).

---

## 🧠 Simple Definition

👉 **"Ek class dusri class ki properties inherit kare"**

---

## 🌍 Real-Life Example

Company System 🏢

* Base Class → Employee
* Derived Class → Manager, Developer

👉 Sabka basic data same hota hai (name, salary)
👉 But roles different hote hain

---

# 💻 Complete Code (Highly Descriptive + Commented)

```cpp id="inh1"
#include <iostream>
using namespace std;

// ================= BASE CLASS =================
class Employee {

public:
    string name;
    int salary;

    // Function to set data
    void setEmployee(string n, int s) {
        name = n;
        salary = s;
    }

    // Function to display data
    void showEmployee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// ================= DERIVED CLASS =================
class Developer : public Employee {

public:
    string programmingLanguage;

    void setDeveloper(string lang) {
        programmingLanguage = lang;
    }

    void showDeveloper() {
        cout << "Role: Developer" << endl;
        cout << "Language: " << programmingLanguage << endl;
    }
};

// ================= ANOTHER DERIVED CLASS =================
class Manager : public Employee {

public:
    int teamSize;

    void setManager(int size) {
        teamSize = size;
    }

    void showManager() {
        cout << "Role: Manager" << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

// ================= MAIN FUNCTION =================
int main() {

    // Developer object
    Developer dev;

    // Using parent class function
    dev.setEmployee("Shiv", 80000);

    // Using child class function
    dev.setDeveloper("C++");

    cout << "=== Developer Details ===" << endl;
    dev.showEmployee();
    dev.showDeveloper();

    cout << endl;

    // Manager object
    Manager mgr;

    mgr.setEmployee("Rahul", 100000);
    mgr.setManager(10);

    cout << "=== Manager Details ===" << endl;
    mgr.showEmployee();
    mgr.showManager();

    return 0;
}
```

---

# 🔍 Key Understanding

## 🧱 Base Class

```cpp id="inh2"
class Employee
```

👉 Common properties define karta hai

---

## 👶 Derived Class

```cpp id="inh3"
class Developer : public Employee
```

👉 Parent ka data inherit karta hai

---

## 🔗 Access

```cpp id="inh4"
dev.setEmployee(...)
```

👉 Child object parent function use kar sakta hai

---

# ⚙️ Types of Inheritance

| Type         | Meaning                        |
| ------------ | ------------------------------ |
| Single       | One parent → one child         |
| Multilevel   | Parent → child → grandchild    |
| Multiple     | Multiple parents               |
| Hierarchical | One parent → multiple children |

---

# 🎯 Learning Outcome

After completing this module, you will:

* Understand inheritance
* Reuse code efficiently
* Build class hierarchy
* Write scalable programs

---

# 💡 Pro Tip (Interview Line)

👉 “Inheritance promotes code reusability and establishes relationships between classes.”

---

# 🏁 Conclusion

Inheritance allows efficient code reuse and helps in designing real-world systems using class hierarchies.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
