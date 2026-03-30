# 🪟 Sliding Window Technique (C++)

## 📌 Overview

Sliding Window is an optimization technique used to reduce time complexity from **O(n²) → O(n)** for problems involving subarrays or substrings.

---

## 🧠 What is Sliding Window?

Instead of recalculating every subarray, we:
👉 Maintain a **window (range)**
👉 Expand and shrink it as needed

---

## 🔑 When to Use?

* Subarray / substring problems
* Fixed or variable window size
* Sum / max / count problems

---

# 🚀 1️⃣ Fixed Size Window

## 🎯 Problem

Find maximum sum of subarray of size `k`

---

### 💻 Code:

```cpp id="sw1"
#include <iostream>
using namespace std;

int maxSum(int arr[], int n, int k) {
    int windowSum = 0;

    // first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i];      // add next
        windowSum -= arr[i - k];  // remove previous

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}
```

---

# 🚀 2️⃣ Variable Size Window

## 🎯 Problem

Find longest subarray with sum ≤ k

---

### 💻 Code:

```cpp id="sw2"
int longestSubarray(int arr[], int n, int k) {
    int left = 0, sum = 0, maxLen = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
```

---

## 🧠 Key Idea

👉 Expand window:

```id="expand"
right++
```

👉 Shrink window:

```id="shrink"
left++
```

---

## ⚙️ Complexity

* Time: **O(n)**
* Space: **O(1)**

---

## 🎯 Learning Outcome

After completing this module, you will:

* Optimize brute force solutions
* Solve subarray problems efficiently
* Understand two-pointer variation
* Crack medium-level interview questions

---

## 💡 Pro Tip

Whenever you see:
👉 Subarray / substring
👉 Max / Min / Count

👉 Think **Sliding Window**

---

## 🏁 Conclusion

Sliding Window is a must-know optimization technique for solving array and string problems efficiently.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
