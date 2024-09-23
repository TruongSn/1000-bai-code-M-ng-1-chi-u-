#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

// Hàm tìm chữ số xuất hiện ít nhất trong mảng
int findLeastFrequentDigit(const vector<int>& arr) {
    unordered_map<int, int> digitFrequency;
    
    // Duyệt qua từng số trong mảng
    for (int num : arr) {
        // Làm việc với giá trị tuyệt đối của số
        num = abs(num);
        
        // Tách từng chữ số
        while (num > 0) {
            int digit = num % 10;
            digitFrequency[digit]++;
            num /= 10;
        }
    }
    
    // Tìm chữ số xuất hiện ít nhất
    int minFreq = INT_MAX;
    int leastFrequentDigit = -1;
    
    for (int digit = 0; digit <= 9; digit++) {
        if (digitFrequency[digit] > 0 && digitFrequency[digit] < minFreq) {
            minFreq = digitFrequency[digit];
            leastFrequentDigit = digit;
        }
    }
    
    return leastFrequentDigit;
}

int main() {
    vector<int> arr = {123, 456, 789, 101, 202, 303};
    
    int result = findLeastFrequentDigit(arr);
    
    if (result != -1) {
        cout << "Chữ số xuất hiện ít nhất là: " << result << endl;
    } else {
        cout << "Không có chữ số nào trong mảng." << endl;
    }
    
    return 0;
}
