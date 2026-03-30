# 🔄 Reverse Array & Check if Array is Sorted (C++)

## 📌 Overview

This module covers two important array problems:

* Reverse an array
* Check whether an array is sorted

These problems are fundamental for Data Structures and coding interviews.

---

## 🚀 Problem 1: Reverse an Array

### 🎯 Problem

Given an array, reverse its elements.

---

### 💻 Code:

```cpp id="k9f2qp"
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int start = 0, end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

### 🧠 Logic:

* Use two pointers
* Swap first and last elements
* Move inward

---

### 🧪 Example:

Input:  [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]

---

## 🚀 Problem 2: Check if Array is Sorted

### 🎯 Problem

Check whether an array is sorted in ascending order.

---

### 💻 Code:

```cpp id="p3x9kq"
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    bool isSorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}
```

---

### 🧠 Logic:

* Compare each element with the next
* If any element is greater than next → not sorted

---

### 🧪 Example:

Input:  [1, 2, 3, 4] → Sorted
Input:  [1, 3, 2, 4] → Not Sorted

---

## ⚙️ Complexity

* Reverse Array → O(n)
* Check Sorted → O(n)

---

## ⚠️ Important Notes

* Use two-pointer technique for reversing
* Always check till `n-1` for sorted condition
* Works for ascending order

---

## 🎯 Learning Outcome

After completing this module, you will:

* Reverse arrays efficiently
* Check sorted condition
* Understand two-pointer approach
* Build strong DSA basics

---

## 💡 Pro Tip

Try variations:

* Reverse only half array
* Check descending order

---

## 🏁 Conclusion

These are fundamental array problems that strengthen your logic and prepare you for advanced DSA concepts.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
