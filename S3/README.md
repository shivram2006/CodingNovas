# ➕ Operators in Programming (C++)

## 📌 Overview

Operators are symbols used to perform operations on variables and values. They are essential for performing calculations, comparisons, and logical decisions in a program.

---

## 🧠 What is an Operator?

An operator is a symbol that tells the compiler to perform a specific operation.

👉 Example:
`+`, `-`, `*`, `/`

---

## 🔢 Types of Operators in C++

### 1️⃣ Arithmetic Operators

Used for mathematical calculations.

| Operator | Meaning        | Example |
| -------- | -------------- | ------- |
| +        | Addition       | a + b   |
| -        | Subtraction    | a - b   |
| *        | Multiplication | a * b   |
| /        | Division       | a / b   |
| %        | Modulus        | a % b   |

---

### 💻 Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    return 0;
}
```

---

### 2️⃣ Relational Operators

Used to compare two values.

| Operator | Meaning          | Example |
| -------- | ---------------- | ------- |
| ==       | Equal to         | a == b  |
| !=       | Not equal to     | a != b  |
| >        | Greater than     | a > b   |
| <        | Less than        | a < b   |
| >=       | Greater or equal | a >= b  |
| <=       | Less or equal    | a <= b  |

---

### 💻 Example:

```cpp
if (a > b) {
    cout << "a is greater than b";
}
```

---

### 3️⃣ Logical Operators

Used to combine multiple conditions.

| Operator | Meaning | Example         |    |       |   |        |
| -------- | ------- | --------------- | -- | ----- | - | ------ |
| &&       | AND     | a > 5 && b < 10 |    |       |   |        |
|          |         |                 | OR | a > 5 |   | b < 10 |
| !        | NOT     | !(a > b)        |    |       |   |        |

---

### 💻 Example:

```cpp
if (a > 5 && b < 10) {
    cout << "Condition is true";
}
```

---

### 4️⃣ Assignment Operators

Used to assign values to variables.

| Operator | Example | Meaning   |
| -------- | ------- | --------- |
| =        | a = 5   | Assign    |
| +=       | a += 2  | a = a + 2 |
| -=       | a -= 2  | a = a - 2 |
| *=       | a *= 2  | a = a * 2 |
| /=       | a /= 2  | a = a / 2 |

---

### 💻 Example:

```cpp
int a = 5;
a += 3; // Now a = 8
```

---

## ⚠️ Important Notes

* Division of integers removes decimal part
* Modulus (%) works only with integers
* Always check conditions carefully

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand different types of operators
* Perform calculations using operators
* Use operators in conditions
* Write logical expressions

---

## 💡 Pro Tip

Practice mixing operators:

```cpp
int result = (a + b) * 2;
```

---

## 🏁 Conclusion

Operators are the backbone of programming logic. Mastering them helps in solving real-world problems efficiently.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
