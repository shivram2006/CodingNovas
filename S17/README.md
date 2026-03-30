# 🔍 Binary Search & Variations (C++)

## 📌 Overview

Binary Search is an efficient algorithm used to search elements in a **sorted array**.
This module covers:

* Basic Binary Search
* Square Root using Binary Search
* First Occurrence
* Last Occurrence

---

## ⚠️ Important Condition

👉 Array must be **sorted**

---

## 🚀 1️⃣ Basic Binary Search

### 💻 Code:

```cpp id="bs1"
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}
```

---

## 🚀 2️⃣ Square Root using Binary Search

### 🎯 Problem

Find square root (integer part) of a number.

---

### 💻 Code:

```cpp id="bs2"
int sqrtBinary(int n) {
    int start = 0, end = n;
    int ans = -1;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;

        if (square == n)
            return mid;
        else if (square < n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}
```

---

## 🚀 3️⃣ First Occurrence

### 💻 Code:

```cpp id="bs3"
int firstOcc(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return ans;
}
```

---

## 🚀 4️⃣ Last Occurrence

### 💻 Code:

```cpp id="bs4"
int lastOcc(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return ans;
}
```

---

## ⚙️ Time Complexity

* Binary Search → O(log n)
* All variations → O(log n)

---

## 🧠 Key Insight

👉 Binary search reduces search space by half every step.

---

## 🎯 Learning Outcome

After completing this module, you will:

* Master binary search
* Solve search-based problems
* Handle duplicates (first/last occurrence)
* Apply binary search in optimization problems

---

## 💡 Pro Tip

Always use:

```cpp id="safe-mid"
mid = start + (end - start) / 2;
```

👉 Prevents overflow

---

## 🏁 Conclusion

Binary Search is one of the most powerful algorithms in DSA. Master it to solve high-level interview problems efficiently.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
