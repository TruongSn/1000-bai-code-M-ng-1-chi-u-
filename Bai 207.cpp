#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    int sum = 0;

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sum the elements that satisfy the condition
    for (int i = 1; i < n - 1; i++) {  // Loop stops at n-1 to avoid out-of-bounds access
        if ((a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1])) {
            sum += a[i];
        }
    }

    cout << sum;
    return 0;
}
