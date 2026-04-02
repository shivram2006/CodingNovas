#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // Insert
    m.insert({1, "Apple"});
    m[2] = "Banana";
    m[3] = "Mango";

    // Access
    cout << "Key 2: " << m[2] << endl;

    // Find
    if (m.find(3) != m.end()) {
        cout << "Found key 3\n";
    }

    // Size
    cout << "Size: " << m.size() << endl;

    // Erase
    m.erase(2);

    // Count
    cout << "Count of key 2: " << m.count(2) << endl;

    // Iterate
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}