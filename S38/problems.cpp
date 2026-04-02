#include <iostream>
#include <unordered_map>
using namespace std;

// Problem 1: Frequency Count
void frequency(int arr[], int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }
}

// Problem 2: First Non-Repeating Character
void firstNonRepeating(string s) {
    unordered_map<char, int> freq;

    for (char c : s) freq[c]++;

    for (char c : s) {
        if (freq[c] == 1) {
            cout << "First non-repeating: " << c << endl;
            return;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4};
    frequency(arr, 6);

    firstNonRepeating("aabbcde");

    return 0;
}