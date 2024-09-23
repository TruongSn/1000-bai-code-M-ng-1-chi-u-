#include <iostream>
using namespace std;

void add_element (int &n, int a[], int k, int x) {
    // Move elements to the right to make space for the new element
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    // Insert the new element at position k
    a[k] = x;
    // Increment the size of the array
    n++;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Set a maximum size for the array
    int a[100]; // Assuming max size of the array is 100
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x, k;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the index k where you want to insert x: ";
    cin >> k;

    // Call the function to add element x at index k
    add_element(n, a, k, x);
    
    // Output the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
