# 🔀 Conditional Statements (if-else) in C++

## 📌 Overview

Conditional statements allow a program to make decisions based on certain conditions. They control the flow of execution depending on whether a condition is true or false.

---

## 🧠 What are Conditionals?

Conditionals are used when a program needs to choose between different actions.

👉 In simple words:
**"If something is true → do this, otherwise → do something else"**

---

## 🔑 Types of Conditional Statements

### 1️⃣ if Statement

Executes a block of code only if the condition is true.

### 💻 Example:

```cpp
int age = 18;

if (age >= 18) {
    cout << "You can vote";
}
```

---

### 2️⃣ if-else Statement

Executes one block if the condition is true, otherwise another block.

### 💻 Example:

```cpp
int age = 16;

if (age >= 18) {
    cout << "You can vote";
} else {
    cout << "You cannot vote";
}
```

---

### 3️⃣ else-if Ladder

Used when there are multiple conditions.

### 💻 Example:

```cpp
int marks = 85;

if (marks >= 90) {
    cout << "Grade A";
} else if (marks >= 75) {
    cout << "Grade B";
} else if (marks >= 50) {
    cout << "Grade C";
} else {
    cout << "Fail";
}
```

---

### 4️⃣ Nested if

An if statement inside another if statement.

### 💻 Example:

```cpp
int age = 20;
bool hasID = true;

if (age >= 18) {
    if (hasID) {
        cout << "Entry allowed";
    }
}
```

---

## ⚙️ Syntax

```cpp
if (condition) {
    // code
} else {
    // code
}
```

---

## ⚠️ Important Notes

* Conditions always return **true or false**
* Use relational operators (==, >, <, etc.)
* Use logical operators (&&, ||) for multiple conditions

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand decision-making in programming
* Use if, if-else, and else-if effectively
* Handle multiple conditions
* Write logical programs

---

## 💡 Pro Tip

Avoid writing too many nested if statements — keep your code clean and readable.

---

## 🏁 Conclusion

Conditional statements make programs intelligent by allowing them to take decisions based on different situations.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
