#include<iostream>
#include<set>
using namespace std;
void explainSet() {
    // Set is a collection of unique elements stored in a specific order (sorted)
    // Implemented using balanced BST (like Red-Black Tree)
    // Common operations: insert, erase, find, count, size, clear, empty
    // All operations take O(log n) time
    // No random access (no indexing)
    set<int> s;
    s.insert(5); // {5}
    s.insert(1); // {1,5}
    s.insert(3); // {1,3,5}
    s.insert(3); // {1,3,5} (no duplicates allowed)
    s.emplace(4); // More efficient than insert
    for(auto i : s) {
        cout << i << " "; // 1 3 4 5
    }
    cout << endl;

    s.erase(3); // {1,4,5}
    cout << s.count(3) << endl; // 0 (3 is not present)
    cout << s.count(4) << endl; // 1 (4 is present)

    auto it = s.find(4);
    if(it != s.end()) {
        cout << "Found: " << *it << endl; // Found: 4
    } else {
        cout << "Not Found" << endl;
    }

    int count = s.count(5); //if it exists count=1 else count=0

    cout << "Size: " << s.size() << endl; // Size: 3
    s.clear(); // {}
    cout << "Empty: " << s.empty() << endl; // Empty: 1 (true)
}