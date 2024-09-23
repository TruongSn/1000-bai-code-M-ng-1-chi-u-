#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        bool check = false;  // Reset check for each element in the array
        for (int j = 0; pow(3, j) <= a[i]; j++) {
            if (a[i] == pow(3, j)) {
                check = true;
                break;  // Exit the inner loop early if a power of 3 is found
            }
        }
        if (check) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
