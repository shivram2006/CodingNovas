# 🇳🇱 Dutch National Flag Problem (C++)

## 📌 Overview

The Dutch National Flag problem is a famous algorithmic problem used to sort an array containing only `0s`, `1s`, and `2s` in a single pass.

---

## 🎯 Problem Statement

Given an array containing only `0`, `1`, and `2`, sort the array in ascending order without using any sorting algorithm.

👉 Example:

```text
Input:  [2, 0, 2, 1, 1, 0]  
Output: [0, 0, 1, 1, 2, 2]
```

---

## 🧠 Approach (3-Pointer Method)

We use three pointers:

* `low` → for placing 0s
* `mid` → current element
* `high` → for placing 2s

---

## ⚙️ Algorithm Steps

1. Initialize:

   * low = 0
   * mid = 0
   * high = n - 1

2. Traverse while `mid <= high`:

   * If `arr[mid] == 0` → swap(arr[low], arr[mid]), low++, mid++
   * If `arr[mid] == 1` → mid++
   * If `arr[mid] == 2` → swap(arr[mid], arr[high]), high--

---

## 💻 Code:

```cpp id="4r7xkp"
#include <iostream>
using namespace std;

void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = 6;

    sortColors(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

## 🔍 Dry Run (Understanding)

Initial:

```text
[2, 0, 2, 1, 1, 0]
low=0, mid=0, high=5
```

👉 Step-by-step:

* 2 → swap with high
* 0 → swap with low
* 1 → move mid
  ...

👉 Final:

```text
[0, 0, 1, 1, 2, 2]
```

---

## ⏱️ Complexity

* Time Complexity: **O(n)**
* Space Complexity: **O(1)**

---

## ⚠️ Important Points

* One-pass solution
* No extra space
* Based on partitioning logic

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand 3-pointer technique
* Solve medium-level DSA problems
* Improve problem-solving speed
* Prepare for coding interviews

---

## 💡 Pro Tip

This is similar to Quick Sort partition logic — try connecting both concepts.

---

## 🏁 Conclusion

Dutch National Flag is a classic problem that teaches efficient in-place sorting using pointers. Mastering this helps in solving many advanced problems.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
