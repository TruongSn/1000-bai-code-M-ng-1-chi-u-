#include <iostream>
using namespace std;

int digit (int n){
    int the;
    while (n!=0){
        the = n%10;
        if (the%2==0){
            return 0;
        }
            n=n/10;
    }
    return 1;
}

int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
   for (int i=0;i<n;i++){
     if (digit(a[i]==1)){
        cout<<a[i]<<" ";
     }
   }
return 0;
}