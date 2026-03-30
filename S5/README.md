# 🔗 Logical Operators (AND, OR) & Mini Project: Report Card System

## 📌 Overview

This module focuses on using logical operators (`&&`, `||`) to combine conditions and build real-world logic. It also includes a mini project to apply these concepts practically.

---

## 🧠 Logical Operators Recap

Logical operators are used to combine multiple conditions.

---

## 🔑 Types of Logical Operators

### 1️⃣ AND Operator (&&)

Returns true only if **both conditions are true**

### 💻 Example:

```cpp
int age = 20;
int marks = 80;

if (age >= 18 && marks >= 50) {
    cout << "Eligible";
}
```

👉 Output: Eligible (both conditions true)

---

### 2️⃣ OR Operator (||)

Returns true if **at least one condition is true**

### 💻 Example:

```cpp
int marks = 40;
bool sportsQuota = true;

if (marks >= 50 || sportsQuota) {
    cout << "Selected";
}
```

👉 Output: Selected (one condition true)

---

### 3️⃣ NOT Operator (!)

Reverses the condition

```cpp
if (!(marks < 50)) {
    cout << "Passed";
}
```

---

## ⚖️ Difference Between AND & OR

| Operator | Condition Requirement |   |                   |
| -------- | --------------------- | - | ----------------- |
| &&       | Both must be true     |   |                   |
|          |                       |   | At least one true |

---

## 🚀 Mini Project: Report Card System

### 🎯 Objective

Create a simple program that takes marks as input and prints the grade and pass/fail status.

---

## 💻 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    // Grade system
    if (marks >= 90) {
        cout << "Grade A" << endl;
    } else if (marks >= 75) {
        cout << "Grade B" << endl;
    } else if (marks >= 50) {
        cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    // Pass/Fail using logical operator
    if (marks >= 50 && marks <= 100) {
        cout << "Status: Passed" << endl;
    } else {
        cout << "Status: Failed" << endl;
    }

    return 0;
}
```

---

## 🧪 Sample Output

```
Enter your marks: 82
Grade B
Status: Passed
```

---

## ⚠️ Important Notes

* Marks should be between 0 and 100
* Use `&&` carefully when checking ranges
* Logical operators are widely used in real-world applications

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand AND, OR, NOT operators deeply
* Combine multiple conditions effectively
* Build small real-world programs
* Improve logical thinking

---

## 💡 Pro Tip

Try upgrading this project:

* Add subject-wise marks
* Calculate percentage
* Add division (First, Second, etc.)

---

## 🏁 Conclusion

Logical operators help in building smart decision-making systems. With practice, you can solve complex real-world problems easily.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
