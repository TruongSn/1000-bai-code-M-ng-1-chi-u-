#include <iostream>
using namespace std;

int revert (int n){
    while (n!=0){
        int final_digit = n%10;
        int revert_number = revert_number*10+final_digit;
        n=n/10;
    }
    return revert_number;
}

int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (revert(a[i])==a[i]){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}