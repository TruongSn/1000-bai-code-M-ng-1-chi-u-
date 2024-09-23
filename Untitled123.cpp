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
	int index =0 ;
	int min = a[0];
	for (int i=1;i<n;i++){
		if (a[i]<min){
			min=a[i];
			index=i;
		}
	}
	cout<<"Chi so : "<<index;
	return 0;

}
