#include <iostream>
using namespace std;
int main (){
    int n;
    int k;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];}
    cout<<"Enter the position: ";
    cin>>k;
    k--;
    for (int i=k;i<n;i++){
        a[i]= a[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}