#include <iostream>
using namespace std;

void dich_sang_phai (int n, int a[], int k){
    while (k--){
        int temp = a[n-1];
        for (int i=n-1;i>0-1;i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
}
int main (){
    int n;
    cin>>n;
    int k;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    dich_sang_phai (n,a,k);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
    return 0;

}