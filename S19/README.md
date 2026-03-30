# 📦 Vectors in C++ & Their Methods (STL)

## 📌 Overview

Vectors are dynamic arrays in C++ provided by the Standard Template Library (STL). Unlike normal arrays, vectors can resize automatically.

---

## 🧠 What is a Vector?

A vector is a dynamic array that can grow or shrink in size during runtime.

👉 In simple words:
**"Vector = Dynamic Array"**

---

## ⚙️ Syntax

```cpp id="v1"
#include <vector>
using namespace std;

vector<int> v;
```

---

## 🚀 Basic Operations

### 1️⃣ Add Element (push_back)

```cpp id="v2"
v.push_back(10);
v.push_back(20);
```

---

### 2️⃣ Access Elements

```cpp id="v3"
cout << v[0];
cout << v.at(1);
```

---

### 3️⃣ Size of Vector

```cpp id="v4"
cout << v.size();
```

---

### 4️⃣ Remove Last Element

```cpp id="v5"
v.pop_back();
```

---

### 5️⃣ Check Empty

```cpp id="v6"
if (v.empty()) {
    cout << "Vector is empty";
}
```

---

### 6️⃣ First and Last Element

```cpp id="v7"
cout << v.front();
cout << v.back();
```

---

## 🔄 Traversing a Vector

### Using loop:

```cpp id="v8"
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

---

### Using range-based loop:

```cpp id="v9"
for (int x : v) {
    cout << x << " ";
}
```

---

## ⚙️ Other Useful Methods

| Function   | Description          |
| ---------- | -------------------- |
| clear()    | Removes all elements |
| resize(n)  | Changes size         |
| capacity() | Current capacity     |

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand vectors
* Use STL effectively
* Replace arrays with vectors
* Write dynamic programs

---

## 💡 Pro Tip

Always prefer vectors over arrays in interviews.

---

## 🏁 Conclusion

Vectors are powerful and flexible. Mastering them is essential for solving modern DSA problems efficiently.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
