#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool check = true;  // Declare check outside the loop

    // Check consecutive pairs for even sums
    for (int i = 0; i < n - 1; i++) {  // Loop until second last element to avoid out-of-bounds access
        int sum = a[i] + a[i + 1];  // Calculate sum of consecutive elements
        if (sum % 2 == 0) {  // If the sum is even
            check = false;
            break;  // No need to check further, exit the loop
        }
    }

    // Output 1 if all consecutive pairs have odd sums, otherwise 0
    if (check) {
        cout << "1";
    } else {
        cout << "0";
    }
    
    return 0;
}
