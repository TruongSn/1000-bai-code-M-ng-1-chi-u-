#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    for (int i=0;i<n;i++){
        if (a[i]<0){
            k = i;
            for (int j=k;j<n;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}