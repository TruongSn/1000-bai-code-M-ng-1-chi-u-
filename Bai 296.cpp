#include <iostream>

using namespace std;

int max(int a[], int n) {
    int maxValue = a[0];  // Renamed variable to avoid shadowing `max` function name.
    for (int i = 1; i < n; i++) {
        maxValue = a[i] > maxValue ? a[i] : maxValue;
    }
    return maxValue;
}

int kiemtratangdan(int b[], int nb) {
    for (int i = 0; i < nb - 1; i++) {
        if (b[i] > b[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void xuatmang(int b[], int nb) {
    for (int i = 0; i < nb; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int kiemtracomax(int b[], int nb, int max) {
    for (int i = 0; i < nb; i++) {
        if (b[i] == max) {
            return 1;
        }
    }
    return 0;
}

void lietke(int a[], int n, int maxValue) {
    int b[100], nb;

    for (int i = 0; i < n; i++) {
        for (int chieudai = 1; chieudai <= n - i; chieudai++) { // Adjusted (`n - i`) to avoid overflow
            nb = chieudai; // Adjusting `nb` to be equal to the length of the subarray formed
            for (int j = 0; j < chieudai; j++) {
                b[j] = a[i + j]; // Correct indexing for the new subarray
            }
            if (kiemtratangdan(b, nb) == 1 && kiemtracomax(b, nb, maxValue) == 1) {
                xuatmang(b, nb);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxValue = max(a, n); // Correctly calling the max function
    lietke(a, n, maxValue); // Passing the max value
    return 0;
}
