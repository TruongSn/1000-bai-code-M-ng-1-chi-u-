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
	int max = a[0];
	for (int i=1;i<n;i++){
		if (max<a[i]){
			max = a[i];
		}
	}
	cout<<"Gia tri lon nhat cua mang: "<<max;
	return 0;
}
