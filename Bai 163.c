#include <iostream>
#include <cmath>
using namespace std;
int square_number (int n){
    for (int i=0;i<=n/2;i++){
        if (n=i*i){
            return true;
        }
    }
    return false;
}
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    if(square_number (a[i])){
        cout<<a[i];
        break;
    }
    return 0;
}