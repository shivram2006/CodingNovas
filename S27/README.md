# 🧱 Introduction to Object-Oriented Programming (OOPs) in C++

## 📌 Overview

Object-Oriented Programming (OOPs) is a programming paradigm based on objects and classes.
It helps in writing modular, reusable, and scalable code.

---

## 🧠 What is OOP?

OOP is a way of structuring programs using **classes and objects**.

👉 In simple words:
**"OOP = Real world entities ko code me represent karna"**

---

# 🧩 Basic Concepts of OOP

---

## 🏗️ 1️⃣ Class

A class is a blueprint of an object.

### 💻 Example:

```cpp id="oop1"
class Student {
public:
    string name;
    int age;
};
```

---

## 👤 2️⃣ Object

An object is an instance of a class.

```cpp id="oop2"
Student s1;
s1.name = "Shiv";
s1.age = 20;
```

---

## 🔒 3️⃣ Encapsulation

Wrapping data and functions together inside a class.

```cpp id="oop3"
class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};
```

---

## 🧬 4️⃣ Inheritance

One class inherits properties of another class.

```cpp id="oop4"
class Animal {
public:
    void speak() {
        cout << "Animal speaks";
    }
};

class Dog : public Animal {
};
```

---

## 🔁 5️⃣ Polymorphism

Same function behaves differently.

### Function Overloading:

```cpp id="oop5"
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}
```

---

## 🎭 6️⃣ Abstraction

Hiding internal details and showing only essential features.

👉 Example:

* Car → You drive, but don’t know engine internals

---

# 🚀 Complete Example Program

```cpp id="oop6"
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Shiv";
    s1.age = 20;

    s1.display();

    return 0;
}
```

---

## ⚙️ Advantages of OOP

* Code reusability
* Better organization
* Easy maintenance
* Real-world modeling

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand OOP concepts
* Create classes and objects
* Apply inheritance and polymorphism
* Write modular programs

---

## 💡 Pro Tip

👉 OOP is heavily asked in interviews — focus on concepts + examples

---

## 🏁 Conclusion

OOP is the backbone of modern programming. Mastering it helps in building scalable and maintainable applications.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
