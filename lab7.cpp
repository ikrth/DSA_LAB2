#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of key in an array
vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);  // store index if match
        }
    }
    return indices; // could be empty if no match
}

int main() {
    // Test case 1: Multiple occurrences
    vector<int> arr1 = {1, 2, 3, 2, 4, 2};
    vector<int> result1 = findIndices(arr1, 2);
    cout << "Indices for key 2: ";
    for (int idx : result1) cout << idx << " ";
    if (result1.empty()) cout << "(empty)";
    cout << endl;

    // Test case 2: Key not present
    vector<int> arr2 = {5, 6, 7};
    vector<int> result2 = findIndices(arr2, 10);
    cout << "Indices for key 10: ";
    for (int idx : result2) cout << idx << " ";
    if (result2.empty()) cout << "(empty)";
    cout << endl;

    // Test case 3: Empty array
    vector<int> arr3 = {};
    vector<int> result3 = findIndices(arr3, 1);
    cout << "Indices in empty array: ";
    for (int idx : result3) cout << idx << " ";
    if (result3.empty()) cout << "(empty)";
    cout << endl;

    return 0;
}
