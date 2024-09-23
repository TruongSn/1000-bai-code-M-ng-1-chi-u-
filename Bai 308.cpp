#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    int b[n];
    for (int i=0;i<n;i++){
        if (a[i]<0){
            b[j]=a[i];
            j++;
        }
    }
    for (int i=0;i<j;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}