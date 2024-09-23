#include <iostream>
using namespace std;
int main (){
    int n,x,y;
    cin>>n;
    cin>>x>>y;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (x<=a[i] && a[i]<=y){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}