#include <iostream>
using namespace std;

bool check(int a[], int n) {
    // Traverse from the second element to the second last element
    for (int i = 1; i < n - 1; i++) {
        if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) {
            return true; // Found an element satisfying the condition
        }
    }
    return false; // No such element found
}

int main() {
    int n;
    cin >> n;
    int a[n];
    
    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Check the array using the check function
    if (check(a, n)) {
        cout << "1"; // If such an element exists, print 1
    } else {
        cout << "0"; // If no such element exists, print 0
    }
    
    return 0;
}
