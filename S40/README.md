# 🌳 Trees & Binary Search Tree (BST) in C++

## 📌 Overview

This project covers the fundamentals of **Trees** in Data Structures along with **Binary Trees**, **Tree Traversals**, and **Binary Search Tree (BST)** implementation.

Trees are **non-linear data structures** used to represent hierarchical relationships.

---

## 🧠 What is a Tree?

A Tree is a collection of nodes where:

* One node is called the **Root**
* Each node can have child nodes
* Nodes are connected via edges

---

## 📚 Tree Terminology

* **Root** → Topmost node of the tree
* **Node** → Each element in the tree
* **Edge** → Connection between nodes
* **Parent** → Node having child nodes
* **Child** → Node derived from parent
* **Leaf Node** → Node with no children
* **Internal Node** → Node with at least one child
* **Height** → Longest path from root to leaf
* **Depth** → Distance from root to a node
* **Subtree** → Smaller tree inside a tree
* **Sibling** → Nodes with same parent

---

## 🌳 Types of Trees

* Binary Tree
* Binary Search Tree (BST)
* Full Binary Tree
* Complete Binary Tree

---

## 🔄 Tree Traversals

Traversal means visiting all nodes of a tree.

### 🔹 1. Inorder (Left → Root → Right)

### 🔹 2. Preorder (Root → Left → Right)

### 🔹 3. Postorder (Left → Right → Root)

---

## ⚙️ BST (Binary Search Tree)

A Binary Search Tree follows:

* Left child < Root
* Right child > Root

This property helps in fast searching.

---

## 🔧 BST Operations

* Insert a node
* Search a node
* Traversal (Inorder, Preorder, Postorder)

---

## 💻 Sample Code (BST)

```cpp id="v0b4rc"
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Insert in BST
Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);

    inorder(root); // Output: 2 3 4 5 7
}
```

---

## ⚡ Sample Output

```id="l7k6f9"
2 3 4 5 7
```

---

## 🚀 Applications of Trees

* File systems
* Hierarchical data (organization, family tree)
* Databases & indexing
* AI & decision trees

---

## 📂 Project Structure

* `tree_intro.cpp`
* `traversal.cpp`
* `bst_insert.cpp`
* `bst_traversal.cpp`
* `README.md`

---

## 📚 Learning Outcomes

After this project, you will:

* Understand tree structure & terminology
* Perform different traversals
* Implement BST insertion
* Solve hierarchical problems

---

## 👨‍💻 Author

**Shivam Sharma**
Founder & CEO, CodingNovas

---

## ⭐ Contribution

You can improve this project by adding:

* BST deletion
* Level order traversal
* AVL Trees
* Practice problems

---
