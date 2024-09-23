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
    int chusodautien;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        chusodautien = first_digit(a[i]);
        if (chusodautien%2!=0){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}