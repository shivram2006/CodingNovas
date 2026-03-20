#include <iostream>
#include <vector>
using namespace std;

// Slidin Window algorithm

int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    
    // Step 1: First window ka sum
    int windowSum = 0;
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Window slide karo
    for(int i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    cout << "Maximum Sum = " << maxSumSubarray(arr, k);

    return 0;
}