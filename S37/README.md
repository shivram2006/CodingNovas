# 🔄 Circular Linked List (C++)

## 📌 Overview

This project demonstrates the implementation of a **Circular Linked List** using C++.

A Circular Linked List is a type of linked list where the last node points back to the **head node**, forming a loop.

---

## 🧠 Concept

* Each node contains:

  * `data`
  * `next` pointer
* In a circular linked list:

  * Last node → points to **head**
  * No `NULL` pointer at the end

---

## 🔧 Features Implemented

* ✅ Insert at end
* ✅ Display list
* ✅ Delete node (by value)

---

## 📂 Code Structure

* `Node` class → Represents each element
* `CircularLL` class → Handles operations

  * `insert()` → Add node
  * `display()` → Print list
  * `remove()` → Delete node

---

## ▶️ How It Works

### 🔹 Insertion

* If list is empty:

  * New node points to itself
* Otherwise:

  * Traverse to last node
  * Insert new node
  * Maintain circular link

---

### 🔹 Display

* Uses `do-while` loop
* Traverses until it reaches head again

---

### 🔹 Deletion

Handles 3 cases:

1. Single node
2. First node
3. Middle / Last node

---

## 💻 Sample Output

```
Original List: 10 20 30 40
After Deletion: 10 30 40
```

---

## ⚠️ Important Points

* Always maintain circular connection
* Avoid infinite loops while traversing
* `do-while` is preferred over `while`

---

## 🚀 Use Cases

* Round-robin scheduling
* Multiplayer turn-based games
* Circular queues

---

## 📚 Learning Outcome

After this project, you will understand:

* Pointer manipulation
* Linked list traversal
* Memory handling in C++

---

## 👨‍💻 Author

**Shivam Sharma**
Founder & CEO, CodingNovas

---

## ⭐ Contribution

Feel free to fork this repository and enhance it with:

* Search operation
* Reverse circular linked list
* Doubly circular linked list

---
