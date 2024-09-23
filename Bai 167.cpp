#include <iostream>
using namespace std;

// Hàm kiểm tra xem tất cả các chữ số của n có phải số lẻ không
int check_odd(int n) {
    int final_digit;
    while (n != 0) {
        final_digit = n % 10;
        if (final_digit % 2 == 0) {  // Nếu tìm thấy số chẵn
            return 0;  // Trả về 0 nếu có chữ số chẵn
        }
        n = n / 10;  // Giảm số n
    }
    return 1;  // Trả về 1 nếu tất cả các chữ số đều là số lẻ
}

// Hàm tìm số lớn nhất có tất cả chữ số lẻ
int find_max(int a[], int n) {
    int max = -999999;  // Khởi tạo giá trị nhỏ ban đầu
    for (int i = 0; i < n; i++) {
        if (check_odd(a[i]) == 1) {  // Nếu số có tất cả chữ số lẻ
            if (a[i] > max) {
                max = a[i];  // Cập nhật giá trị lớn nhất
            }
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tìm số lớn nhất có tất cả chữ số lẻ
    int result = find_max(a, n);

    // In kết quả
    if (result != -999999) {
        cout << "The largest number with all odd digits is: " << result << endl;
    } else {
        cout << "No number with all odd digits found." << endl;
    }

    return 0;
}
    