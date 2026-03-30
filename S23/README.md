# 🔄 Selection Sort & Insertion Sort (C++)

## 📌 Overview

This module covers two fundamental sorting algorithms:

* Selection Sort
* Insertion Sort

Both are important for understanding sorting logic and are frequently asked in interviews.

---

# 🎯 1️⃣ Selection Sort

## 🧠 Concept

Repeatedly select the **minimum element** and place it at the correct position.

---

## 💻 Code:

```cpp id="sel1"
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}
```

---

## ⚙️ Complexity

* Time: **O(n²)**
* Space: **O(1)**

---

# ✍️ 2️⃣ Insertion Sort

## 🧠 Concept

Insert each element into its correct position in the **sorted part of the array**.

👉 Similar to sorting playing cards 🃏

---

## 💻 Code:

```cpp id="ins1"
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
```

---

## ⚙️ Complexity

* Worst Case: **O(n²)**
* Best Case: **O(n)** (already sorted)
* Space: **O(1)**

---

## 🧪 Example

```text id="exsi"
Input:  [5, 3, 2, 4, 1]

Selection → [1, 2, 3, 4, 5]  
Insertion → [1, 2, 3, 4, 5]
```

---

## ⚖️ Difference Between Selection & Insertion

| Feature   | Selection Sort | Insertion Sort |
| --------- | -------------- | -------------- |
| Approach  | Select min     | Insert element |
| Swaps     | Less           | More shifting  |
| Best Case | O(n²)          | O(n)           |
| Adaptive  | ❌ No           | ✅ Yes          |

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand two sorting techniques
* Compare sorting algorithms
* Improve logic building
* Prepare for advanced sorting

---

## 💡 Pro Tip

👉 Use Insertion Sort when array is almost sorted
👉 Selection Sort is useful when swaps are costly

---

## 🏁 Conclusion

Selection and Insertion Sort are foundational algorithms that help in understanding more advanced sorting techniques like Merge Sort and Quick Sort.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
