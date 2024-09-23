#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of input: ";
    cin >> n;

    vector<int> a(n);  // Use vector for dynamic size
    int sum = 0;
    
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    int result = sum % 1000000007;  // Modulo operation
    cout << "Result: " << result << endl;

    return 0;
}
