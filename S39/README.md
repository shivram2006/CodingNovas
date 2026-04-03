# 🔁 Recursion in C++

## 📌 Overview

This project demonstrates the concept of **Recursion** in C++ with multiple examples ranging from basic to advanced.

Recursion is a technique where a function calls itself to solve smaller instances of a problem.

---

## 🧠 What is Recursion?

👉 Recursion = Function calling itself

Every recursive function must have:

* **Base Case** → stopping condition
* **Recursive Case** → function calling itself

---

## 🔄 How Recursion Works

1. Function call hota hai
2. Problem chhoti hoti jaati hai
3. Base case hit hota hai
4. Calls reverse me return hoti hain

---

## ⚙️ Examples Included

* ✅ Factorial of a number
* ✅ Fibonacci series
* ✅ Sum of N numbers
* ✅ Reverse a number
* ✅ Power calculation

---

## 💻 Sample Code

```cpp id="rg0t8w"
#include <iostream>
using namespace std;

// Factorial using recursion
int factorial(int n) {
    if(n == 0) return 1;  // base case
    return n * factorial(n - 1); // recursive call
}

int main() {
    cout << factorial(5);
}
```

---

## ⚡ Output

```id="5k0o4u"
120
```

---

## 📚 Key Concepts

* Function call stack
* Base condition
* Recursive breakdown
* Backtracking

---

## 🚀 Advantages

* Code becomes shorter and cleaner
* Useful in tree/graph problems
* Easy to understand complex problems

---

## ⚠️ Disadvantages

* Can cause stack overflow
* Slower than iteration (sometimes)
* Uses extra memory

---

## 🎯 Applications

* Tree traversal
* Graph algorithms
* Divide and conquer
* Backtracking problems

---

## 📂 Project Structure

* `factorial.cpp`
* `fibonacci.cpp`
* `sum.cpp`
* `power.cpp`
* `reverse.cpp`

---

## 👨‍💻 Author

**Shivam Sharma**
Founder & CEO, CodingNovas

---

## ⭐ Contribution

You can enhance this project by adding:

* Tail recursion
* Memoization
* Advanced recursion problems

---
