#include <iostream>
#include <map>
using namespace std;

// Custom comparator (Descending order)
struct compare {
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    map<int, string, compare> m;

    m[1] = "A";
    m[3] = "C";
    m[2] = "B";

    cout << "Descending Order Map:\n";
    for (auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    // Map of vectors
    map<string, vector<int>> mp;
    mp["Shiv"] = {90, 80, 85};

    cout << "\nMarks:\n";
    for (auto x : mp) {
        cout << x.first << ": ";
        for (int i : x.second) cout << i << " ";
        cout << endl;
    }

    return 0;
}