#include <iostream>
using namespace std;

// Hàm kiểm tra nếu một số là số lẻ
bool odd_digit(int n) {
    return (n % 2 == 1);  // Trả về true nếu n là số lẻ
}

// Hàm tìm chữ số đầu tiên của một số
int FirstDigit(int n) {
    while (n >= 10) {
        n /= 10;  // Chia cho 10 liên tiếp cho đến khi còn 1 chữ số
    }
    return n;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool check = false;
    int result = -1;

    // Tìm số có chữ số đầu tiên là số chẵn
    for (int i = 0; i < n; i++) {
        int first_digit = FirstDigit(a[i]);  // Tìm chữ số đầu tiên
        if (odd_digit(first_digit)) {  // Nếu chữ số đầu tiên không phải là số lẻ (tức là số chẵn)
            result = a[i];
            check = true;
            break;
        }
    }

    if (check) {
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
