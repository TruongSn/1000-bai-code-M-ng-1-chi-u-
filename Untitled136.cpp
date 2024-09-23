#include <iostream>
using namespace std;

int kiemtra(int a[], int n){
	for (int i=n-1;i>=0;i--){
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
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
	int result = kiemtra(a,n);
	cout<<"Ket qua: "<<result;
	return 0;
	
}
