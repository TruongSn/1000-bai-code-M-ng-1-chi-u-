#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    bool check = true;
    for (int i=0;i<n;i++){
        if (a[i]%2!=0){
            check =false;
        }
    }
    if (check){
        cout<<"1";
    }else {
        cout<<"0";
    }
    return 0;
}