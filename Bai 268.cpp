#include <iostream>
using namespace std;

void add_element(int &n, int a[], int k, int x) {
    // Move elements to the right to make space for the new element
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    // Insert the new element at position k
    a[k + 1] = x; // Insert x after a[k]
    // Increment the size of the array
    n++;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Use a fixed-size array (for example, max size 100)
    int a[100];

    cout << "Enter the elements of the array (in sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    // Find the correct position to insert x
    for (int i = 0; i < n; i++) {
        if (a[i] < x && x < a[i + 1]) {
            int k = i;
            add_element(n, a, k, x);
            break; // Break after inserting once
        }
    }

    // Output the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
