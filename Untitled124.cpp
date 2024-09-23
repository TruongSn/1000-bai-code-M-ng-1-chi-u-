#include <iostream>
using namespace std;

int kiemtra (int a[], int n){
	int flag=0;
	for (int i=0;i<n;i++){
		if (a[i]%2==0 && a[i]<2004){
			flag = 1;
		}
	}
	return flag;
}

int main (){
	int n;
	cout<<"Nhap so luong phan tu :";
	cin>>n;
	int a[n];
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int flag = kiemtra (a,n);
	if (flag ==1){
		cout<<"Tim thay";
	}else {
		cout<<"Khong tim thay";
	}
	return 0;
	
}
