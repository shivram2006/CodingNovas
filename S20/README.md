# 🧊 Container With Most Water (LeetCode)

## 📌 Overview

This problem is based on the **Two Pointer Technique** and is one of the most popular array problems asked in coding interviews.

---

## 🎯 Problem Statement

Given an array `height[]`, where each element represents the height of a vertical line, find two lines that together with the x-axis form a container such that the container holds the **maximum amount of water**.

---

## 🧠 Key Idea

👉 Area = width × height

* Width = distance between two lines
* Height = minimum of two lines

---

## 🚀 Optimized Approach (Two Pointer)

* Start with two pointers:

  * `left = 0`
  * `right = n - 1`

* Move the pointer with smaller height

---

## 💻 Code:

```cpp id="cwmw1"
#include <iostream>
using namespace std;

int maxArea(int height[], int n) {
    int left = 0, right = n - 1;
    int maxWater = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;

        if (area > maxWater) {
            maxWater = area;
        }

        // Move pointer with smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    cout << "Maximum Water: " << maxArea(height, n);

    return 0;
}
```

---

## 🧪 Example

Input: [1,8,6,2,5,4,8,3,7]
Output: 49

---

## ⚙️ Complexity

* Time Complexity: **O(n)**
* Space Complexity: **O(1)**

---

## 🧠 Why Two Pointer Works?

* We always try to maximize width
* Move smaller height to possibly get a bigger area

---

## 🎯 Learning Outcome

After completing this module, you will:

* Understand two pointer technique
* Solve optimized array problems
* Reduce time complexity from O(n²) → O(n)
* Prepare for top interviews

---

## 💡 Pro Tip

Whenever you see:
👉 Pair + maximize/minimize
👉 Opposite ends

👉 Think **Two Pointer**

---

## 🏁 Conclusion

This problem is a perfect example of optimizing brute force using two pointers. Master it for strong interview performance.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
