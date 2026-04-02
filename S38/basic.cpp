#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // Ordered Map (Sorted by key)
    map<int, string> m;
    m[1] = "Shiv";
    m[3] = "Ram";
    m[2] = "Sharma";

    cout << "Ordered Map:\n";
    for (auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    // Unordered Map (No order)
    unordered_map<int, string> um;
    um[1] = "Shiv";
    um[3] = "Ram";
    um[2] = "Sharma";

    cout << "\nUnordered Map:\n";
    for (auto x : um) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}