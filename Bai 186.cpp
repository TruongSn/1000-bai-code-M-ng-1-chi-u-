#include<iostream>
using namespace std;

int find (int a[], int n){
    int result;
    for (int i=0;i<n;i++){
        if (a[i]<0){
            result =  a[i];
            break;
        }
    }
    return result;
}
 int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int giatriamdautien = find(a,n);
    for (int i=0;i<n;i++){
        if (a[i]==giatriamdautien){
            cout<<i+1<<" ";
        }
    }
    return 0;
 }