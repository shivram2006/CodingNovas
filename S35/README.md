# 🔗 Introduction to Linked List & Singly Linked List (C++)

## 📌 Overview

A Linked List is a linear data structure where elements (nodes) are connected using pointers.

---

## 🧠 Simple Definition

👉 **"Data + Address of next node"**

---

## 🌍 Real-Life Example 🚆

Train 🚆:

* Each coach = Node
* Each coach connected to next coach

👉 Array = fixed seats
👉 Linked List = flexible coaches

---

# 🧱 Structure of Node

Each node contains:

1. Data
2. Pointer to next node

---

# 💻 FULL CODE (Singly Linked List - Real-Life Based)

```cpp id="ll1"
#include <iostream>
using namespace std;

// =====================================================
// 🔵 NODE CLASS (Represents one coach in train)
// =====================================================
class Node {
public:
    int data;      // Data (coach number / value)
    Node* next;    // Pointer to next node

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// =====================================================
// 🔵 LINKED LIST CLASS
// =====================================================
class LinkedList {

private:
    Node* head;   // First node (engine of train)

public:

    // Constructor
    LinkedList() {
        head = NULL;
    }

    // =====================================================
    // 🔹 INSERT AT END (Add coach at end)
    // =====================================================
    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        // If list is empty
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Traverse to last node
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // =====================================================
    // 🔹 DISPLAY LIST (Print all nodes)
    // =====================================================
    void display() {

        Node* temp = head;

        cout << "Linked List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

// =====================================================
// 🔵 MAIN FUNCTION
// =====================================================
int main() {

    LinkedList list;

    cout << "=== Train Coaches (Linked List) ===\n";

    // Adding coaches
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    // Display train
    list.display();

    return 0;
}
```

---

# 🧠 STEP-BY-STEP UNDERSTANDING

## 🔹 Node Creation

```cpp id="n1"
Node(int value)
```

👉 Ek coach create hota hai

---

## 🔹 Head Pointer

```cpp id="n2"
Node* head;
```

👉 Train ka engine

---

## 🔹 Traversal

```cpp id="n3"
while (temp != NULL)
```

👉 Ek-ek node visit karna

---

# ⚙️ WHY LINKED LIST?

| Feature       | Array      | Linked List    |
| ------------- | ---------- | -------------- |
| Size          | Fixed      | Dynamic        |
| Insert/Delete | Slow       | Fast           |
| Memory        | Continuous | Non-contiguous |

---

# ⚠️ IMPORTANT POINTS

✔ Dynamic memory use karta hai
✔ Pointer required hai
✔ Fast insertion/deletion

---

# 🎯 LEARNING OUTCOME

After this, you can:

* Create nodes
* Traverse list
* Insert elements
* Understand pointer linking

---

# 💡 PRO TIP (INTERVIEW)

👉 “Linked List provides dynamic memory allocation and efficient insertion/deletion compared to arrays.”

---

# 🏁 CONCLUSION

Linked List is a flexible data structure where elements are connected dynamically using pointers.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
