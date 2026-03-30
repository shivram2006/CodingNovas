#include <iostream>
using namespace std;

// peak of the mountain

int findPeakElement(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start; // index of peak
}









// Buy and sell problem
int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main() {
    int arr[] = {1, 2, 3, 1};
    int n = 4;

    int peakIndex = findPeakElement(arr, n);

    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << arr[peakIndex] << endl;

    return 0;
}