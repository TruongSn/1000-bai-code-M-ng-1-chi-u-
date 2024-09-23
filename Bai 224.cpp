#include <iostream>
using namespace std;
int sum (int  n){
    int sum =0;
    for (int i=0;i,n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    for (int i=0;i<n;i++){
        if (a[i]=sum(a[i])){
            count ++;
        }
    }
    cout<<count;
return 0;
}