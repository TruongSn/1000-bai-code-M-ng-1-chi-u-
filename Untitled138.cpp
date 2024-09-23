#include <iostream>
using namespace std;
int kiemtra (int a[], int n){
	for (int i=0;i<n;i++){
		if (a[i]%2==0){
			return a[i];
		}
	}
	return -1;
}
int main (){
	int n;
	cout<<"Nhap so luong phan tu cua mang: ";
	cin>>n;
	int a[n];
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int result = kiemtra(a,n);
	cout<<"Ket qua la: "<<result;
	return 0;
}
