# 🗺️ Map & Unordered Map (C++ STL)

## 📌 Overview

This project demonstrates the usage of **map** and **unordered_map** in C++ along with important problem-solving examples.

Maps store data in **key-value pairs**, enabling fast lookup and efficient data handling.

---

## 🧠 Concepts Covered

* map (Ordered)
* unordered_map (Unordered)
* Key-Value Pair storage
* Hashing concept
* Frequency counting
* Searching & Deletion

---

## ⚙️ Features Implemented

### 🔹 Basic Operations

* Insert elements
* Access values
* Traverse map
* Search key
* Delete key

---

### 🔹 Problem Solving (Using Map)

* ✅ Frequency Count
* ✅ First Non-Repeating Element
* ✅ Check Duplicates
* ✅ Count Distinct Elements
* ✅ Two Sum
* ✅ Longest Subarray with Sum K
* ✅ Intersection of Arrays
* ✅ Subarray with Zero Sum
* ✅ Longest Consecutive Sequence
* ✅ Top K Frequent Elements
* ✅ Group Anagrams
* ✅ Subarray Sum Equals K

---

## 💻 Sample Code Usage

```cpp
unordered_map<int, int> m;

m[1] = 10;
m[2] = 20;

for(auto x : m) {
    cout << x.first << " " << x.second << endl;
}
```

---

## ⚡ map vs unordered_map

| Feature         | map      | unordered_map |
| --------------- | -------- | ------------- |
| Order           | Sorted   | Random        |
| Implementation  | Tree     | Hashing       |
| Time Complexity | O(log n) | O(1)          |

---

## 🚀 Applications

* Frequency counting
* Fast searching
* Data caching
* Competitive programming

---

## 📂 Project Structure

* `map_functions.cpp`
* `unordered_map_functions.cpp`
* `problems.cpp`
* `README.md`

---

## 📚 Learning Outcome

After completing this project, you will:

* Understand key-value mapping
* Solve real-world problems using hashing
* Improve problem-solving speed

---

## 👨‍💻 Author

**Shivam Sharma**
Founder & CEO, CodingNovas

---

## ⭐ Contribution

You can improve this project by adding:

* More advanced problems
* Custom hash functions
* Performance comparison

---
