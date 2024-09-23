#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pos = -1;  // Khởi tạo vị trí là -1 (nếu không tìm thấy)
    bool check = false;

    // Vòng lặp từ 1 đến n-2 để tránh truy cập ngoài mảng
    for (int i = 1; i < n - 1; i++) {
        if (a[i] == a[i - 1] * a[i + 1]) {  // Sử dụng toán tử so sánh "=="
            pos = i;
            check = true;
            break;  // Thoát vòng lặp khi tìm thấy
        }
    }

    if (check) {
        cout << "Position: " << pos << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
