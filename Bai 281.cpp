#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    int mid = n / 2;
    int evenIdx = 0, oddIdx = mid + (n % 2); // Start for odd numbers

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            b[mid] = 0; // Place zero in the middle
        } else if (a[i] % 2 == 0) {
            if (evenIdx < mid) {
                b[evenIdx++] = a[i]; // Fill from the beginning for evens
            }
        } else {
            if (oddIdx < n) {
                b[oddIdx++] = a[i]; // Fill from the midpoint for odds
            }
        }
    }

    // Output the contents of array `b`
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
