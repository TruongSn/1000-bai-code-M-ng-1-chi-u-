#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số chính phương
bool square_number(int n) {
    for (int i = 0; i <= n / 2; i++) {
        if (n == i * i) {  // Sửa toán tử gán "=" thành so sánh "=="
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];  // Khai báo mảng a
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // Nhập từng phần tử của mảng
    }

    // Tìm phần tử đầu tiên là số chính phương
    for (int i = 0; i < n; i++) {
        if (square_number(a[i])) {  // Kiểm tra từng phần tử trong mảng
            cout << "First square number in the array: " << a[i] << endl;
            return 0;  // Kết thúc chương trình sau khi tìm thấy
        }
    }

    // Nếu không tìm thấy số chính phương
    cout << "No square number found in the array." << endl;

    return 0;
}
