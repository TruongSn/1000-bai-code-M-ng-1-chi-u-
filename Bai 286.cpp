#include <iostream>
using namespace std;
void dich_trai (int n, int a[], int k){
    while (k--){
        int temp = a[0];
        for (int i=0;i<n-1;i++){
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
}
int main (){
    int n;
    int k;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the value of k: ";
    cin>>k;
    dich_trai (n,a,k);
    for (int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}