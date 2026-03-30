# 🔁 Loops Practice & Important Questions (C++)

## 📌 Overview

This module focuses on practicing loops using real coding problems. These problems help in building logic and improving problem-solving skills.

---

## 🔁 Quick Revision of Loops

Loops are used to repeat a block of code.

### Types:

* for loop
* while loop
* do-while loop

---

## 🚀 Important Questions on Loops

---

## 1️⃣ Count Digits of a Number

### 🎯 Problem:

Given a number, count how many digits it contains.

---

### 💻 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        num = num / 10;
        count++;
    }

    cout << "Total digits: " << count;

    return 0;
}
```

---

### 🧠 Logic:

* Divide the number by 10 repeatedly
* Each division removes the last digit
* Count how many times this happens

---

### 🧪 Example:

Input: 12345
Output: 5

---

## 2️⃣ Reverse a Number

### 💻 Code:

```cpp
int num = 1234;
int reverse = 0;

while (num != 0) {
    int digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;
}

cout << reverse; // 4321
```

---

## 3️⃣ Sum of Digits

### 💻 Code:

```cpp
int num = 1234;
int sum = 0;

while (num != 0) {
    sum += num % 10;
    num /= 10;
}

cout << sum; // 10
```

---

## 4️⃣ Check Palindrome Number

### 💻 Code:

```cpp
int num = 121, original = num;
int reverse = 0;

while (num != 0) {
    reverse = reverse * 10 + (num % 10);
    num /= 10;
}

if (original == reverse) {
    cout << "Palindrome";
} else {
    cout << "Not Palindrome";
}
```

---

## 5️⃣ Print Numbers from 1 to N

```cpp
for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}
```

---

## ⚠️ Important Notes

* Always update loop variable
* Avoid infinite loops
* Use `%` to extract digits
* Use `/` to remove digits

---

## 🎯 Learning Outcome

After completing this module, you will:

* Master loop-based problems
* Understand number manipulation
* Improve logical thinking
* Solve basic coding interview questions

---

## 💡 Pro Tip

Most number problems use this pattern:

```cpp
digit = num % 10;
num = num / 10;
```

---

## 🏁 Conclusion

Loops are powerful when combined with logic. Practicing these problems builds a strong foundation for advanced programming.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
