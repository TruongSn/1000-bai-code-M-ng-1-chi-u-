#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);  // Use vector for dynamic array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = 99999999;
    bool found = false;  // Flag to check if there's a positive number

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (a[i] < min) {
                min = a[i];
            }
            found = true;  // At least one positive number found
        }
    }

    if (found) {
        cout << min;  // Print the minimum positive number
    } else {
        cout << -1;   // No positive number found
    }

    return 0;
}
