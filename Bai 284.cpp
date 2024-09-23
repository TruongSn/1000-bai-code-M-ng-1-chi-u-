#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Swap even numbers from the first half with even numbers from the second half
    int i = 0, j = n - 1;
    while (i < j) {
        // Find the next even number in the first half
        while (i < n/2 && a[i] % 2 != 0) {
            i++;
        }
        // Find the next even number in the second half
        while (j >= n/2 && a[j] % 2 != 0) {
            j--;
        }

        if (i < j) {
            // Swap even numbers
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
