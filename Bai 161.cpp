#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, y;
    cout << "Enter the size of the array (n): ";
    cin >> n;

    vector<int> a(n);  // Sử dụng vector để khai báo mảng động

    cout << "Enter the values of x and y: ";
    cin >> x >> y;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool check = false;
    int result = -1;

    // Vòng lặp từ x đến y (giả sử x và y là chỉ số hợp lệ)
    if (x >= 0 && y < n && x <= y) {
        for (int i = x; i <= y; i++) {
            if (a[i] >= x && a[i] <= y) {  // Kiểm tra giá trị nằm trong khoảng từ x đến y
                check = true;
                result = a[i];
                break;
            }
        }
    }

    if (check) {
        cout << "The first value in the range [" << x << ", " << y << "] is: " << result;
    } else {
        cout << "-1 (No values found in the given range)";
    }

    return 0;
}
