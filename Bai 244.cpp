#include <iostream>
using namespace std;
bool check (int n){
    int sum=0;
    for (int i=0;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        return true;
    }else {
        return false;
    }
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
        if (check(a[i])&&a[i]>256){
            count++;
        }
    }
    cout<<count;
}