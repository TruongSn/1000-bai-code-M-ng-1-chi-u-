#include <iostream>
using namespace std;
bool isPrime (int n){
    for (int i=0;i<n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main (){
    int n;
    cin>>n;
    int pos;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i =0;i<n;i++){
        if (isPrime (a[i])){
             = i;
        }
        cout<<pos<<" ";
    }
    return 0;
}