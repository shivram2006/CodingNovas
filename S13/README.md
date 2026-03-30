# 📊 Array Operations: Sum, Product, Minimum & Maximum (C++)

## 📌 Overview

This module covers basic operations on arrays such as finding the sum, product, minimum, and maximum elements. These are fundamental problems in Data Structures and frequently asked in interviews.

---

## 🧠 Problem Statement

Given an array of integers, perform the following operations:

* Find the sum of all elements
* Find the product of all elements
* Find the minimum element
* Find the maximum element

---

## 💻 Complete Code:

```cpp id="x9f2kq"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int product = 1;
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];

        if (arr[i] < minVal) {
            minVal = arr[i];
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}
```

---

## 🧪 Example

Input:

```id="lq2xk9"
Array = [2, 4, 6, 8]
```

Output:

```id="z8m1tq"
Sum = 20  
Product = 384  
Minimum = 2  
Maximum = 8  
```

---

## ⚙️ Logic Breakdown

### 🔹 Sum

Add all elements:

```cpp id="3b9xk1"
sum += arr[i];
```

---

### 🔹 Product

Multiply all elements:

```cpp id="7h2mzp"
product *= arr[i];
```

---

### 🔹 Minimum

```cpp id="p4n8vq"
if (arr[i] < minVal)
    minVal = arr[i];
```

---

### 🔹 Maximum

```cpp id="k2m9zx"
if (arr[i] > maxVal)
    maxVal = arr[i];
```

---

## ⚠️ Important Notes

* Initialize `minVal` and `maxVal` with first element
* Product can become very large (watch overflow)
* Time Complexity: **O(n)**

---

## 🎯 Learning Outcome

After completing this module, you will:

* Perform basic array operations
* Understand traversal logic
* Solve common interview questions
* Build strong DSA foundation

---

## 💡 Pro Tip

Try solving separately first:

* Only sum
* Only max
* Then combine all

---

## 🏁 Conclusion

These operations are the building blocks of many advanced algorithms. Master them for a strong coding foundation.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
