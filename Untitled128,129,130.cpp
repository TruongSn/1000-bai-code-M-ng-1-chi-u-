#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"Nhap so luong : ";
	cin>>n;
	int a[n];
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Xuat mang: ";
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
