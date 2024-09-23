#include <iostream>
using namespace std;

// Hàm kiểm tra số gánh (số đối xứng)
int SoGanh(int x) {
    int SoDao = 0;
    int themang = x;
    while (themang != 0) {
        SoDao = SoDao * 10 + themang % 10;  // Đảo ngược số
        themang /= 10;
    }
    if (x == SoDao) {  // Kiểm tra xem số ban đầu và số đảo có bằng nhau không
        return 1;
    }
    return 0;
}

// Hàm tìm số gánh đầu tiên trong mảng
int TimSoGanhDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (SoGanh(a[i]) == 1) {  // Nếu là số gánh
            return a[i];  // Trả về số gánh đầu tiên
        }
    }
    return -1;  // Trả về -1 nếu không có số gánh
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];  // Khai báo mảng
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // Nhập các phần tử của mảng
    }

    // Tìm số gánh đầu tiên
    int ganhdau = TimSoGanhDauTien(a, n);

    if (ganhdau != -1) {
        cout << "First symmetric number (so ganh) is: " << ganhdau << endl;
    } else {
        cout << "No symmetric number found in the array." << endl;
    }
    return 0;
}
