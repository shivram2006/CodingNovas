# 🚀 LeetCode Problems: Two Sum, FizzBuzz & Move Zeroes (C++)

## 📌 Overview

This module covers three important coding problems frequently asked in interviews:

* Two Sum (Pair Sum)
* FizzBuzz using arrays
* Move Zeroes

These problems help build strong logic and array manipulation skills.

---

## 🔢 Problem 1: Two Sum (Pair Sum)

### 🎯 Problem (LeetCode)

Given an array and a target value, find two numbers such that they add up to the target.

---

### 💻 Code (Brute Force):

```cpp id="k4x9pz"
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4, target = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << ", " << arr[j];
            }
        }
    }

    return 0;
}
```

---

### ⚡ Optimized Idea:

Use HashMap (for O(n) time)

---

## 🧪 Example:

Input: [2, 7, 11, 15], Target = 9
Output: 2 + 7

---

## 🔢 Problem 2: FizzBuzz (Array Based)

### 🎯 Problem

Print numbers from 1 to n:

* Multiples of 3 → "Fizz"
* Multiples of 5 → "Buzz"
* Multiples of both → "FizzBuzz"

---

### 💻 Code:

```cpp id="3q2jxp"
#include <iostream>
using namespace std;

int main() {
    int n = 15;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << i << endl;
    }

    return 0;
}
```

---

## 🧪 Example Output:

```id="f1p8oz"
1
2
Fizz
4
Buzz
Fizz
...
```

---

## 🔢 Problem 3: Move Zeroes (LeetCode)

### 🎯 Problem

Move all zeroes to the end of the array while maintaining the relative order of non-zero elements.

---

### 💻 Code:

```cpp id="d5p2kx"
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0; // position for non-zero

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

### 🧠 Logic:

* Move all non-zero elements forward
* Push zeroes automatically to the end

---

### 🧪 Example:

Input:  [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]

---

## ⚙️ Complexity

* Two Sum (Brute) → O(n²)
* FizzBuzz → O(n)
* Move Zeroes → O(n)

---

## 🎯 Learning Outcome

After completing this module, you will:

* Solve pair-based problems
* Apply conditions in loops
* Manipulate arrays efficiently
* Improve problem-solving skills

---

## 💡 Pro Tip

Always try to optimize brute force solutions — interviews love optimized logic.

---

## 🏁 Conclusion

These problems are essential for mastering arrays and logic building. Practice them to improve speed and accuracy.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
