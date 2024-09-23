#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n]; // Array for input numbers
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n]; // Array for odd numbers
    int j = 0; // Index for array `b`

    // Store odd numbers from array `a` into array `b`
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            b[j] = a[i];
            j++; // Increment index `j` only when an odd number is added
        }
    }

    // Print the odd numbers stored in array `b`
    for (int i = 0; i < j; i++) { // Only print up to index `j`
        cout << b[i] << " ";
    }
    
    return 0;
}
