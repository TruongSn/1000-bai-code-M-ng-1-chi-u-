#include <iostream>
using namespace std;

bool isPrime (int n){
    if (n<=1){
        return false;
    }else {
        for (int i=0;i<n;i++){
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
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int count = 0;
    for (int i=0;i<n;i++){
        if (isPrime (a[i])){
            count ++;
        }
    }
    return 0;
}