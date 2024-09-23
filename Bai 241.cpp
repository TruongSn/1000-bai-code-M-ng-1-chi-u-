#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bool flag = false;  // Declare flag outside the loop to retain its value after checking all elements

    // Check for duplicates
    for (int i = 0; i < n - 1; i++) {  // Loop through all elements
        for (int j = i + 1; j < n; j++) {  // Compare with every other element
            if (a[i] == a[j]) {  // If duplicate is found
                flag = true;
                break;  // Exit inner loop if duplicate is found
            }
        }
        if (flag) {
            break;  // Exit outer loop as well if duplicate is found
        }
    }

    // Output 1 if duplicates are found, otherwise 0
    if (flag) {
        cout << "1";
    } else {
        cout << "0";
    }
    
    return 0;
}
