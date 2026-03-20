#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int maxWater = 0;

    // Try all pairs
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int h = min(height[i], height[j]); // minimum height
            int w = j - i;                     // width
            int area = h * w;                  // water stored

            maxWater = max(maxWater, area);
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water = " << maxArea(height);

    return 0;
}