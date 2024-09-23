#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check the first element (if it is a peak)
    if (n > 1 && a[0] > a[1]) {
        cout << a[0] << " ";
    }

    // Check elements from index 1 to n-2 (if they are peaks)
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i + 1] && a[i] > a[i - 1]) {
            cout << a[i] << " ";
        }
    }

    // Check the last element (if it is a peak)
    if (n > 1 && a[n - 1] > a[n - 2]) {
        cout << a[n - 1];
    }

    return 0;
}
