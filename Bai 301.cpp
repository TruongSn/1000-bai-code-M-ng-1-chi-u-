#include <iostream>
using namespace std;

int check (int a[], int b[], int na, int nb) {
    int found = 0; // Renamed to avoid confusion with main function
    for (int i = 0; i < nb; i++) {
        if (b[i] == a[0]) {
            int start = i;
            found = 1;
            for (int j = 0; j < na; j++) {
                if (a[j] != b[start++]) {
                    found = 0;
                    break;
                }
            }
            if (found == 1) {
                return found;
            }
        }
    }
    return found;
}

int main() {
    int na, nb;
    
    // Input array a
    cout << "Enter the size of array a: ";
    cin >> na;
    int a[na];
    cout << "Enter elements of array a: ";
    for (int i = 0; i < na; i++) {
        cin >> a[i];
    }
    
    // Input array b
    cout << "Enter the size of array b: ";
    cin >> nb;
    int b[nb];
    cout << "Enter elements of array b: ";
    for (int i = 0; i < nb; i++) {
        cin >> b[i];
    }

    int result = check(a, b, na, nb);
    if (result != 1) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    
    return 0;
}
