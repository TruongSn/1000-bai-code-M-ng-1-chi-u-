#include <iostream>
using namespace std;

bool isPrime (int n){
    if (n<=1){
        return false;
    }else{
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
    cin >>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int max = a[0];
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max =a[i];
        }
    }

    for (int i=max+1;i<max*max;i++){
        if (isPrime (i)){
            cout<<i;
            break;
        }
    }
    return 0;
}