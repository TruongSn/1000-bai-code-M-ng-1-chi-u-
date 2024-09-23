#include <iostream>
using namespace std;
float kiemtra (int a[], int n){
	for (int i =0;i<n;i++){
		if (a[i]>0){
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
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	float first = kiemtra (a,n);
	cout<<first;
	return 0;
	
}
