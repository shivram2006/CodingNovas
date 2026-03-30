# 🌧️ Trapping Rain Water (LeetCode)

## 📌 Overview

This problem is an advanced version of the Two Pointer technique and is one of the most important problems in Data Structures.

---

## 🎯 Problem Statement

Given an array `height[]` representing elevation map, compute how much water it can trap after raining.

---

### 🧪 Example:

```text id="ex1"
Input:  [0,1,0,2,1,0,1,3,2,1,2,1]  
Output: 6
```

---

## 🧠 Key Idea

Water trapped at any index depends on:

👉 **min(leftMax, rightMax) - height[i]**

---

## 🚀 Optimized Approach (Two Pointer)

We use:

* `left` pointer
* `right` pointer
* `leftMax` and `rightMax`

---

## 💻 Code:

```cpp id="trw1"
#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];

            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];

            right--;
        }
    }

    return water;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << "Trapped Water: " << trap(height);

    return 0;
}
```

---

## 🧠 Dry Run Insight

For:

```text id="ex2"
[0,1,0,2,1,0,1,3,2,1,2,1]
```

👉 Water gets trapped in dips between taller bars
👉 Total trapped water = **6 units**

---

## ⚙️ Complexity

* Time Complexity: **O(n)**
* Space Complexity: **O(1)**

---

## 🔥 Why This Works

* We track leftMax & rightMax dynamically
* Always process the smaller side

---

## 🎯 Learning Outcome

After completing this module, you will:

* Master Two Pointer technique
* Solve medium-level DSA problems
* Understand space optimization
* Improve problem-solving speed

---

## 💡 Pro Tip

👉 Whenever you see:

* Heights / bars
* Water trapping
  👉 Think: **Left Max & Right Max**

---

## 🏁 Conclusion

Trapping Rain Water is a classic optimization problem that tests your understanding of arrays and two pointers. Master it for strong interview performance.

---

👨‍💻 **Maintained by:**
Shiv Ram Sharma
Founder & CEO, CodingNovas
