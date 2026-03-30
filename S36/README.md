# 🔗 Doubly Linked List (C++)

## 📌 Overview

A Doubly Linked List (DLL) is a data structure where each node contains:

* Data
* Pointer to next node
* Pointer to previous node

👉 It allows traversal in **both directions** (forward & backward)

---

## 🌍 Real-Life Example 🚆

Imagine a **train 🚆**:

* Each coach knows:

  * Next coach
  * Previous coach

👉 This is exactly how a Doubly Linked List works.

---

## 🧱 Structure of Node

Each node contains:

* `data` → value
* `next` → pointer to next node
* `prev` → pointer to previous node

---

## ⚙️ Operations Implemented

✔ Insert at Beginning
✔ Insert at End
✔ Delete Node
✔ Search Element
✔ Display Forward
✔ Display Backward

---

## 💻 Code Snippet

```cpp
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
```

---

## 🔄 Traversal

### 👉 Forward Traversal

```cpp
while (temp != NULL) {
    temp = temp->next;
}
```

### 👉 Backward Traversal

```cpp
while (temp != NULL) {
    temp = temp->prev;
}
```

---

## ⚖️ Doubly vs Singly Linked List

| Feature     | Singly LL | Doubly LL |
| ----------- | --------- | --------- |
| Direction   | One-way   | Two-way   |
| Memory      | Less      | More      |
| Flexibility | Low       | High      |

---

## 🎯 Advantages

✔ Bidirectional traversal
✔ Easy deletion (no need to track previous manually)
✔ Better flexibility

---

## ⚠️ Disadvantages

❌ Extra memory (prev pointer)
❌ Slightly complex

---

## 🧠 Key Concepts

* `next` → forward link
* `prev` → backward link
* `head` → starting node

---

## 🎯 Learning Outcome

After this module, you will:

* Understand DLL structure
* Perform insertion & deletion
* Traverse in both directions
* Build strong DSA foundation

---

## 💡 Pro Tip

👉 Use Doubly Linked List when:

* You need backward traversal
* Frequent insert/delete operations

---

## 🏁 Conclusion

Doubly Linked List is a powerful data structure that provides flexibility by allowing traversal in both directions, making it useful in many real-world applications.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
