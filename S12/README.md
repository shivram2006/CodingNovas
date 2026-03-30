# 📦 Basics of Arrays (C++)

## 📌 Overview

Arrays are one of the most fundamental data structures in programming. They are used to store multiple values of the same type in a single variable.

---

## 🧠 What is an Array?

An array is a collection of elements stored at **contiguous memory locations**.

👉 In simple words:
**"Array = Ek hi type ke multiple values ka group"**

---

## ⚙️ Syntax of Array

```cpp id="y8k2jp"
datatype arrayName[size];
```

### Example:

```cpp id="2zq7ha"
int arr[5];
```

---

## 📥 Input in Array

```cpp id="1x9b3d"
int arr[5];

for (int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

---

## 📤 Output from Array

```cpp id="h6n4w2"
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

---

## 🔢 Example Program

```cpp id="8d2qkp"
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

## 🔍 Indexing in Array

* Index starts from **0**
* Last index = size - 1

Example:

```id="7q8n2m"
arr[0] → first element  
arr[4] → last element (if size = 5)
```

---

## 🚀 Common Operations on Arrays

### 1️⃣ Traversal

```cpp id="c4m9pq"
for (int i = 0; i < n; i++) {
    cout << arr[i];
}
```

---

### 2️⃣ Find Maximum Element

```cpp id="i5x8jd"
int maxVal = arr[0];

for (int i = 1; i < n; i++) {
    if (arr[i] > maxVal) {
        maxVal = arr[i];
    }
}
```

---

### 3️⃣ Find Minimum Element

```cpp id="o3p9lz"
int minVal = arr[0];

for (int i = 1; i < n; i++) {
    if (arr[i] < minVal) {
        minVal = arr[i];
    }
}
```

---

### 4️⃣ Sum of Elements

```cpp id="k9d2fw"
int sum = 0;

for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```

---

## ⚠️ Important Notes

* Array size should be fixed
* All elements must be of same type
* Out-of-bounds access causes errors

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand array basics
* Take input and print arrays
* Perform common operations
* Build foundation for DSA

---

## 💡 Pro Tip

Always use loops with arrays — they go hand-in-hand.

---

## 🏁 Conclusion

Arrays are the first step into Data Structures. Master them to unlock advanced topics like sorting, searching, and algorithms.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
