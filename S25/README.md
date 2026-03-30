# 📚 Stack & Queue (STL + Array Implementation in C++)

## 📌 Overview

This module covers:

* Stack (LIFO)
* Queue (FIFO)
* Implementation using STL
* Implementation using arrays

---

# 🧱 1️⃣ Stack (LIFO)

## 🧠 Concept

👉 Last In, First Out
👉 Last element inserted → first removed

---

## 🚀 Stack using STL

### 💻 Code:

```cpp id="stk1"
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;

    st.pop();

    cout << "After pop, Top: " << st.top() << endl;

    cout << "Size: " << st.size() << endl;

    if (st.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";

    return 0;
}
```

---

## ⚙️ Stack using Array

### 💻 Code:

```cpp id="stk2"
#include <iostream>
using namespace std;

class Stack {
public:
    int arr[100];
    int top;

    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top >= 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top < 0) return -1;
        return arr[top];
    }
};
```

---

# 🚶 2️⃣ Queue (FIFO)

## 🧠 Concept

👉 First In, First Out
👉 First element inserted → first removed

---

## 🚀 Queue using STL

### 💻 Code:

```cpp id="q1"
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;

    q.pop();

    cout << "After pop, Front: " << q.front() << endl;

    cout << "Size: " << q.size() << endl;

    return 0;
}
```

---

## ⚙️ Queue using Array

### 💻 Code:

```cpp id="q2"
#include <iostream>
using namespace std;

class Queue {
public:
    int arr[100];
    int front, rear;

    Queue() {
        front = 0;
        rear = -1;
    }

    void push(int x) {
        if (rear == 99) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = x;
    }

    void pop() {
        if (front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int peek() {
        if (front > rear) return -1;
        return arr[front];
    }
};
```

---

# ⚖️ Difference Between Stack & Queue

| Feature | Stack | Queue |
| ------- | ----- | ----- |
| Order   | LIFO  | FIFO  |
| Insert  | push  | push  |
| Remove  | pop   | pop   |
| Access  | top   | front |

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand stack and queue concepts
* Use STL effectively
* Implement using arrays
* Solve DSA problems

---

## 💡 Pro Tip

👉 Stack → recursion, undo operations
👉 Queue → scheduling, BFS

---

## 🏁 Conclusion

Stack and Queue are fundamental data structures that form the base for advanced topics like trees, graphs, and recursion.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
