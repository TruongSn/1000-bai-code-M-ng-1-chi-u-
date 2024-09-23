#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k ;
    for (int  i= 0;i<n;i++){
        if (isPrime (a[i])){
            k=i;
            for (int j= k;j<n;j++){
                a[j] = a[j+1];
            }
            n--;
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}