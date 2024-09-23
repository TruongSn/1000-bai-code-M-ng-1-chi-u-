#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i =0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]==0){
            cout<<1;
            break;
        }else {
            cout<<"0";
            break;
        }
    }
    return 0;
}