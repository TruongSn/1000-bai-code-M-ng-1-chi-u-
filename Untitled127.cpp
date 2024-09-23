#include<iostream>
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
	
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				float temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"Mang sau khi da sap xep: ";
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
