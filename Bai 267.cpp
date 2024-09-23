#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<i;i++){
            if (a[i]>a[j]){
                int temp = a[i];
                for (int k=i;k>j;k--){
                    a[k]=a[k-1];
                }
                a[j]=temp;
                break;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}