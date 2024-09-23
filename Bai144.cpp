#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true; // 2 is prime
    if (n % 2 == 0) return false; // Exclude even numbers

    for (int i = 3; i <= sqrt(n); i += 2) { // Check odd divisors only
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of elements must be positive." << endl;
        return 1; // Exit with an error code
    }

    vector<int> a(n); // Using a vector for dynamic array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool found = false;
    int result = -1;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            result = a[i];
            found = true;
            break; // Stop after finding the first prime
        }
    }

    // Output the result
    if (found) {
        cout << "The first prime number is: " << result << endl;
    } else {
        cout << "No prime number found." << endl;
    }

    return 0;
}