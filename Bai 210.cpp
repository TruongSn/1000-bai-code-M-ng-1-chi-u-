#include <iostream>
using namespace std;
bool isPrime (int n){
    if (n<=1){
        return false;
    }else {
        for (int i=2;i<n;i++){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }
}
int main (){
    int n;
    cin>>n;
    int sum =0;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (isPrime(a[i])){
            sum+=a[i];
        }
    }
    cout<<sum;
return 0;
}