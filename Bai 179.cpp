#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=1;i<n;i++){
        if (abs (a[i-1])<a[i] && a[i]<abs(a[i+1])){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}