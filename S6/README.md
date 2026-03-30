# 🔄 Pre/Post Increment, Decrement & Basics of Loops (C++)

## 📌 Overview

This module explains how increment and decrement operators work and introduces loops, which are used to execute code repeatedly.

---

## 🔢 Increment & Decrement Operators

These operators are used to increase or decrease the value of a variable.

---

## 1️⃣ Pre-Increment (++a)

Value is increased **before** it is used.

### 💻 Example:

```cpp
int a = 5;
cout << ++a;  // Output: 6
```

---

## 2️⃣ Post-Increment (a++)

Value is used first, then increased.

### 💻 Example:

```cpp
int a = 5;
cout << a++;  // Output: 5
```

👉 After execution, value becomes 6

---

## 3️⃣ Pre-Decrement (--a)

Value is decreased **before** it is used.

```cpp
int a = 5;
cout << --a;  // Output: 4
```

---

## 4️⃣ Post-Decrement (a--)

Value is used first, then decreased.

```cpp
int a = 5;
cout << a--;  // Output: 5
```

👉 After execution, value becomes 4

---

## ⚠️ Important Difference

| Type      | Operation Timing |
| --------- | ---------------- |
| ++a / --a | Before use       |
| a++ / a-- | After use        |

---

## 🔁 What are Loops?

Loops are used to execute a block of code multiple times.

👉 In simple words:
**"Repeat a task until a condition is met"**

---

## 🔑 Types of Loops

### 1️⃣ for Loop

Used when number of iterations is known.

### 💻 Example:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

---

### 2️⃣ while Loop

Runs as long as the condition is true.

### 💻 Example:

```cpp
int i = 1;

while (i <= 5) {
    cout << i << endl;
    i++;
}
```

---

### 3️⃣ do-while Loop

Executes at least once, then checks condition.

### 💻 Example:

```cpp
int i = 1;

do {
    cout << i << endl;
    i++;
} while (i <= 5);
```

---

## ⚙️ Loop Structure

### for loop syntax:

```cpp
for (initialization; condition; update) {
    // code
}
```

---

## ⚠️ Important Notes

* Avoid infinite loops
* Always update loop variable
* Check condition carefully

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand pre/post increment and decrement
* Use loops effectively
* Write repetitive logic easily
* Control program flow

---

## 💡 Pro Tip

Use `for loop` when count is fixed, and `while loop` when condition-based repetition is needed.

---

## 🏁 Conclusion

Increment/decrement operators control value changes, while loops help automate repetitive tasks. Together, they form the backbone of programming logic.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
