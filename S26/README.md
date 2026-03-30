# 🔤 Strings in C++ (Introduction, Methods, Reverse, Palindrome & Anagram)

## 📌 Overview

Strings are sequences of characters used to store and manipulate text.
This module covers:

* Introduction to strings
* Common string methods
* Reverse a string
* Check palindrome
* Check anagram

---

# 🧠 What is a String?

A string is a collection of characters.

👉 Example:

```cpp
string name = "Shiv";
```

---

# ⚙️ Basic String Methods

### 💻 Code:

```cpp id="str1"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Coding";

    cout << "Length: " << s.length() << endl;
    cout << "First char: " << s[0] << endl;

    s.push_back('X');
    cout << "After push: " << s << endl;

    s.pop_back();
    cout << "After pop: " << s << endl;

    cout << "Substring: " << s.substr(0, 3) << endl;

    return 0;
}
```

---

# 🔄 Reverse a String

## 💻 Code:

```cpp id="str2"
#include <iostream>
using namespace std;

int main() {
    string s = "hello";

    int start = 0, end = s.length() - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << "Reversed: " << s;

    return 0;
}
```

---

# 🔁 Palindrome String

## 💻 Code:

```cpp id="str3"
#include <iostream>
using namespace std;

int main() {
    string s = "madam";

    int start = 0, end = s.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
```

---

# 🔤 Anagram String

## 🎯 Problem

Two strings are anagrams if they contain the same characters with same frequency.

---

## 💻 Code:

```cpp id="str4"
#include <iostream>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}
```

---

## ⚙️ Complexity

* Reverse → O(n)
* Palindrome → O(n)
* Anagram → O(n)

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand string basics
* Use string methods
* Solve string problems
* Prepare for interview questions

---

## 💡 Pro Tip

Strings = Arrays of characters → apply same logic (two pointers, loops)

---

## 🏁 Conclusion

Strings are one of the most important topics in DSA. Mastering them helps solve many real-world and interview problems.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
