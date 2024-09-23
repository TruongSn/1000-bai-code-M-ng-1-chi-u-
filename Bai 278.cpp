#include <iostream>
using namespace std;
void xoaphantu (int a[], int &n, int k){
    for (int i = k;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}

void xoa_cac_phan_tu_trung_nhau (int a[], int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                xoaphantu(a,n,j);
                j--;
            }
        }
    }
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];  
    }
    xoa_cac_phan_tu_trung_nhau (a,n);
    for (int i=0;i<n;i++0){
        cout<<a[i]<<" ";
    }
    return 0;
}