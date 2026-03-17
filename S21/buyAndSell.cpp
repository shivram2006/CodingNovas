#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    // Edge case: if no prices or only one price, no profit possible
    if (prices.size() <= 1) return 0;

    // Step 1: Initialize minimum price as first day's price
    int minPrice = prices[0];

    // Step 2: Initialize max profit as 0
    int maxProfit = 0;

    // Step 3: Traverse the array starting from day 1
    for (int i = 1; i < prices.size(); i++) {
        
        // Current price on day i
        int currentPrice = prices[i];

        // Step 4: Calculate profit if we sell today
        int profit = currentPrice - minPrice;

        // Step 5: Update max profit if this profit is higher
        if (profit > maxProfit) {
            maxProfit = profit;
        }

        // Step 6: Update minimum price if current price is lower
        if (currentPrice < minPrice) {
            minPrice = currentPrice;
        }
    }

    // Step 7: Return the maximum profit found
    return maxProfit;
}

int main() {
    // Example input
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Function call
    int result = maxProfit(prices);

    // Output result
    cout << "Maximum Profit: " << result << endl;

    return 0;
}