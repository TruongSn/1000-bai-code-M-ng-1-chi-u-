#include <iostream>
using namespace std; 
int main (){
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	int a[n];
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int max = a[0];
	int index = 0;
	for (int i=0;i<n;i++){
	    if (max<a[i]){
	    	max =a[i];
	    	index = i;
		}
	}
	cout<<"Ket qua: "<<index;
	return 0;
}
