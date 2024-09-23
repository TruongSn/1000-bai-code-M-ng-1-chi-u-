#include <iostream>
using namespace std;

void change (int a[], int n, int k){
    int tam = a[k];
    for (int i=k;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=tam;
}

void duachusochiahetcho3vedau (int a[], int n){
    for (int i=0;i<n;i++){
        if (a[i]%3==0){
            change (a,n,i);
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
    duachusochiahetcho3vedau (a,n);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}