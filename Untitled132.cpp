#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"Nhap so luong phan tu cua mang: ";
	cin>>n;
	int a[n];
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for (int i=0;i<n;i++){
		if (a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
	return 0;
	
}
