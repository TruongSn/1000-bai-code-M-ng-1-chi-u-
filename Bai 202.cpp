#include <iostream>
using namespace std;

int first_digit (int n){
    while (n>=10){
        n=n/10;
    }
    return n;
}

int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++){
        if (first_digit (a[i])%2!=0){
            sum+=a[i];
        }
    }
    cout<<sum;
    return 0;
}