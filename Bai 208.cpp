#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

bool square_number(int n) {
    int root = sqrt(n);  // Get the integer square root
    return root * root == n;  // Check if it's a perfect square
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (square_number(a[i])) {
            sum += a[i];
        }
    }

    cout << sum;
    return 0;
}
