#include <iostream>
using namespace std;
bool square_number (int n){
    for (int i=0;i<n;i++){
        if (n==i*i){
            return true;
        }
    }
    return false;
}


int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    for (int i=0;i<n;i++){
        if (square_number (a[i])){
            k = i;
            for (int j=k;j<n;j++){
                a[i]=a[i+1];
            }
            n--;
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}