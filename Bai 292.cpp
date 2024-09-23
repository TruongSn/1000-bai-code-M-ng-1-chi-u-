#include <iostream>
using namespace std;

// Function to round a double to the nearest integer
int bien_doi(double n) {
    int the = static_cast<int>(n);   // Floor of n
    int the2 = the + 1;              // Next integer
    // Determine which is closer, n or the next integer
    if (n - the < the2 - n) {
        return the;
    } else {
        return the2;
    }
}

int main() {
    int n;
    cin >> n;
    
    int a[n];  // Declare array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result;
    for (int i = 0; i < n; i++) {
        result = bien_doi(a[i]);  // Call the rounding function for each element
        cout << result << " ";    // Print the result
    }

    return 0;
}
