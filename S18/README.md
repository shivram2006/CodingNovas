# 📈 Peak Element & Best Time to Buy and Sell Stock (C++)

## 📌 Overview

This module covers two important LeetCode problems:

* Peak Element (Binary Search based)
* Best Time to Buy and Sell Stock (Greedy approach)

These problems are frequently asked in coding interviews.

---

## 🚀 Problem 1: Peak Element

### 🎯 Problem (LeetCode)

Given an array, find a **peak element**.
An element is a peak if it is greater than its neighbors.

---

### 💻 Code (Binary Search Approach):

```cpp id="peak1"
#include <iostream>
using namespace std;

int findPeak(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}
```

---

### 🧠 Logic:

* If right side is increasing → peak lies on right
* Otherwise → peak lies on left

---

### ⚙️ Complexity:

* Time: **O(log n)**
* Space: **O(1)**

---

## 🚀 Problem 2: Best Time to Buy and Sell Stock

### 🎯 Problem (LeetCode)

Given stock prices, find the maximum profit by buying once and selling once.

---

### 💻 Code:

```cpp id="stock1"
#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            profit = max(profit, prices[i] - minPrice);
        }
    }

    return profit;
}
```

---

### 🧠 Logic:

* Track minimum price
* Calculate max profit at each step

---

### 🧪 Example:

Input: [7, 1, 5, 3, 6, 4]
Output: 5 (Buy at 1, Sell at 6)

---

## ⚙️ Complexity

* Time: **O(n)**
* Space: **O(1)**

---

## 🎯 Learning Outcome

After completing this module, you will:

* Apply binary search in non-traditional problems
* Understand greedy approach
* Solve real-world problems
* Improve interview problem-solving

---

## 💡 Pro Tip

👉 Binary search is not only for searching — it's for optimization too.

---

## 🏁 Conclusion

These problems strengthen your ability to think efficiently and solve complex interview questions.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
