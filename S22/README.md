# 🔄 Bubble Sort (C++)

## 📌 Overview

Bubble Sort is a simple sorting algorithm that repeatedly swaps adjacent elements if they are in the wrong order.

---

## 🧠 How Bubble Sort Works?

👉 Compare adjacent elements
👉 Swap if needed
👉 Repeat for all elements

👉 After each pass, the largest element moves to the end

---

## 🧪 Example

```text id="exbs1"
Input:  [5, 3, 2, 4, 1]

Pass 1 → [3, 2, 4, 1, 5]  
Pass 2 → [2, 3, 1, 4, 5]  
Pass 3 → [2, 1, 3, 4, 5]  
Pass 4 → [1, 2, 3, 4, 5]
```

---

## 🚀 Algorithm Steps

1. Loop from 0 to n-1
2. Compare adjacent elements
3. Swap if left > right
4. Repeat until sorted

---

## 💻 Code:

```cpp id="bsort1"
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }

        }
    }
}

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int n = 5;

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

## ⚡ Optimized Bubble Sort

👉 Stop early if already sorted

```cpp id="bsort2"
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}
```

---

## ⚙️ Complexity

* Time:

  * Worst → **O(n²)**
  * Best → **O(n)** (optimized version)
* Space → **O(1)**

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand sorting basics
* Learn swapping logic
* Analyze time complexity
* Prepare for advanced sorting

---

## 💡 Pro Tip

Bubble sort is rarely used in real applications, but it’s important for understanding sorting concepts.

---

## 🏁 Conclusion

Bubble Sort builds the foundation for understanding more efficient sorting algorithms like Quick Sort and Merge Sort.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
