#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        int count =1;
        for (int j=i+1;j<n-1;j++){
            if (a[i]==a[j]){
                count++;
            }
        }
        
        cout<<a[i]<<"xuat hien: "<<count<<"lan !"<<endl;
    }
    return 0;
}