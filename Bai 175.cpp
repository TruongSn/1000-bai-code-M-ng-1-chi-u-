#include <iostream>
#include <cmath>  // For abs function

using namespace std;

void khoang_cach(int n, int a[]) {
    float khoang_cach = abs(a[0] - a[1]);
    
    // Find the minimum distance
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Fix condition (j < n)
            if (abs(a[i] - a[j]) < khoang_cach) {
                khoang_cach = abs(a[i] - a[j]);
            }
        }n
    }

    // Output the pairs with the minimum distance
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Fix condition (j < n)
            if (khoang_cach == abs(a[i] - a[j])) {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];  // If the compiler does not support VLA, use dynamic allocation instead
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    khoang_cach(n, a);  // Fix function call
    return 0;
}
