#include <iostream>
using namespace std;

void xoa_phan_tu (int a[], int n, int k){
    for (int i=k;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}

void xoacacphantu (int a[], int n){
    for (int i=0;i<n-1;i++){
        int flag = 0;
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                xoa_phan_tu(a,n,j);
                j--;
                flag = 1;
            }
        }
        if (flag ==1){
            xoa_phan_tu(a,n,i);
        }
    }
} 

int main (){
    int n;
    int k;

    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    xoa_phan_tu(a,n,k);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}