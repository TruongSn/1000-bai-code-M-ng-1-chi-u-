#include <iostream>
using namespace std;

bool snt(int n) {
    if (n < 2) return false;  // S? nh? hon 2 kh�ng ph?i l� s? nguy�n t?
    for (int i = 2; i <= n / 2; i++) {  // B?t d?u t? 2 v� k?t th�c t?i n/2
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main(){
	int n;
	cout<<"Nhap so luong nguyen to: ";
	cin>>n;
	int a[n];
	int count =0;
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for (int i=0;i<n;i++){
		if (snt(a[i]) && a[i]<100){
			count++;
		}
	}
	cout<<"So luong nguyen to: "<<count<<endl;
	
	return 0;
}
