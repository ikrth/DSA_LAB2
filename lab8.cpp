#include <iostream>
#include <string>
using namespace std;

// Function to find first occurrence of a pattern in text
int findSubstring(const string &text, const string &pattern) {
    // Edge case: empty pattern -> return 0
    if (pattern.empty()) return 0;

    int n = text.size();
    int m = pattern.size();

    // Loop through text
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        // Check if pattern matches starting from i
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) {
            return i; // found
        }
    }
    return -1; // not found
}

int main() {
    // Test cases
    cout << "Test 1 (pattern at beginning): " 
         << findSubstring("hello world", "hello") << endl; // 0
    
    cout << "Test 2 (pattern at end): " 
         << findSubstring("hello world", "world") << endl; // 6
    
    cout << "Test 3 (pattern not present): " 
         << findSubstring("hello world", "cat") << endl; // -1
    
    cout << "Test 4 (empty pattern): " 
         << findSubstring("hello world", "") << endl; // 0
    
    return 0;
}
