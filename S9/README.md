# 🔢 Reverse Number & Palindrome (LeetCode Problems)

## 📌 Overview

This module covers two important number-based problems:

* Reverse a number
* Check if a number is a palindrome

These are frequently asked in coding interviews and help build strong logical thinking.

---

## 🚀 Problem 1: Reverse Integer

### 🎯 Problem (LeetCode)

Given an integer `x`, return its reverse.

---

### 💻 Code:

```cpp id="t6h2g1"
#include <iostream>
using namespace std;

int main() {
    int x = 1234;
    int reverse = 0;

    while (x != 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    cout << "Reversed Number: " << reverse;

    return 0;
}
```

---

### 🧠 Example:

Input: 1234
Output: 4321

---

### ⚠️ Edge Case (Important for interviews)

* Negative numbers
* Overflow (very large numbers)

---

## 🚀 Problem 2: Palindrome Number

### 🎯 Problem (LeetCode)

Given an integer `x`, return true if it is a palindrome.

👉 A palindrome number reads the same forward and backward.

---

### 💻 Code:

```cpp id="i3z9ra"
#include <iostream>
using namespace std;

int main() {
    int x = 121;
    int original = x;
    int reverse = 0;

    while (x != 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
```

---

### 🧠 Example:

Input: 121
Output: Palindrome

Input: 123
Output: Not Palindrome

---

## ⚙️ Common Logic Used

Most number problems follow this pattern:

```cpp id="m0b9o3"
digit = num % 10;
num = num / 10;
```

---

## 🎯 Learning Outcome

After completing this module, you will:

* Reverse any number
* Check palindrome efficiently
* Understand digit manipulation
* Solve basic LeetCode problems

---

## 💡 Pro Tip

Always store the original number before modifying it.

---

## 🏁 Conclusion

These problems are the foundation for more advanced topics like recursion and number theory.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
