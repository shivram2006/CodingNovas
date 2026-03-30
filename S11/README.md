# 🔁 Nested Loops & Pattern Printing (C++)

## 📌 Overview

This module introduces nested loops and pattern printing, which are essential for improving logic building and understanding loop control.

---

## 🧠 What are Nested Loops?

A nested loop is a loop inside another loop.

👉 In simple words:
**"Loop ke andar ek aur loop"**

---

## ⚙️ Syntax

```cpp id="s8l2k9"
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        // inner loop code
    }
}
```

---

## 🔍 How it Works

* Outer loop → controls rows
* Inner loop → controls columns

---

## ⭐ Pattern Printing

Pattern printing helps understand how loops work together.

---

## 🔹 1️⃣ Square Pattern

```cpp id="7dk2xq"
for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

### Output:

```
* * * *  
* * * *  
* * * *  
* * * *  
```

---

## 🔹 2️⃣ Right Triangle Pattern

```cpp id="d5h2rt"
for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

### Output:

```
*  
* *  
* * *  
* * * *  
```

---

## 🔹 3️⃣ Number Triangle

```cpp id="c2w9mz"
for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```

### Output:

```
1  
1 2  
1 2 3  
1 2 3 4  
```

---

## 🔹 4️⃣ Reverse Triangle

```cpp id="6f4qpa"
for (int i = 4; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

## 🔹 5️⃣ Pyramid Pattern

```cpp id="o7k1zx"
int n = 4;

for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

## ⚠️ Important Notes

* Always track **row (i)** and **column (j)**
* Pattern = combination of loops + logic
* Practice is key

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand nested loops
* Print different patterns
* Improve logic building
* Prepare for coding interviews

---

## 💡 Pro Tip

Har pattern ko pehle **dry run (copy pe)** karo, phir code likho.

---

## 🏁 Conclusion

Nested loops are the backbone of pattern problems. Mastering them will significantly improve your coding skills.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
