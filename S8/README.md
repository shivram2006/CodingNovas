# 🧠 Problem Solving: LeetCode, Prime Numbers & Bitwise Operators (C++)

## 📌 Overview

This module focuses on solving important coding problems and understanding bitwise operations, which are commonly asked in coding interviews.

---

## 🚀 Problem 1: Difference Between Product and Sum of Digits

### 🎯 Problem (LeetCode)

Given an integer number `n`, return the difference between the product of its digits and the sum of its digits.

---

### 💻 Code:

```cpp id="1h9x3m"
#include <iostream>
using namespace std;

int main() {
    int n = 234;
    int sum = 0, product = 1;

    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    cout << "Difference: " << product - sum;

    return 0;
}
```

---

### 🧠 Example:

Input: 234
Product = 2×3×4 = 24
Sum = 2+3+4 = 9
Output = 24 - 9 = **15**

---

## 🔢 Problem 2: Check Prime Number

### 🎯 Problem:

Check whether a number is prime or not.

👉 A prime number is divisible only by 1 and itself.

---

### 💻 Code:

```cpp id="6ffhrl"
#include <iostream>
using namespace std;

int main() {
    int n = 7;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime Number";
    else
        cout << "Not Prime";
}
```

---

### ⚡ Optimized Version:

```cpp id="3nwy6r"
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        isPrime = false;
        break;
    }
}
```

---

## ⚙️ Bitwise Operators

Bitwise operators work on binary (0 and 1) representation of numbers.

---

## 🔑 Types of Bitwise Operators

| Operator | Name        | Example |
| -------- | ----------- | ------- |
| &        | AND         | a & b   |
| |        | OR          | a | b   |
| ^        | XOR         | a ^ b   |
| ~        | NOT         | ~a      |
| <<       | Left Shift  | a << 1  |
| >>       | Right Shift | a >> 1  |

---

## 💻 Examples:

### 1️⃣ AND (&)

```cpp id="s2eqm8"
5 & 3  // Output: 1
```

---

### 2️⃣ OR (|)

```cpp id="5k7a2z"
5 | 3  // Output: 7
```

---

### 3️⃣ XOR (^)

```cpp id="g09um6"
5 ^ 3  // Output: 6
```

---

### 4️⃣ Left Shift (<<)

```cpp id="3rr7hj"
5 << 1  // Output: 10 (5 * 2)
```

---

### 5️⃣ Right Shift (>>)

```cpp id="1h3kcm"
5 >> 1  // Output: 2 (5 / 2)
```

---

## 🧠 Why Bitwise is Important?

* Used in optimization
* Faster calculations
* Important in competitive programming
* Frequently asked in interviews

---

## 🎯 Learning Outcome

After completing this module, you will:

* Solve digit-based problems
* Understand prime number logic
* Learn bitwise operations
* Improve problem-solving skills

---

## 💡 Pro Tip

Bitwise tricks are often used in advanced problems — start practicing early.

---

## 🏁 Conclusion

Combining logic, math, and bitwise operations builds a strong foundation for DSA and competitive programming.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
