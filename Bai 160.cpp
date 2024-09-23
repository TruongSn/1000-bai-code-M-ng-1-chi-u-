#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    float a[n];
    for (int i =0;i<n;i++){
        cin>>a[i];
    }
    int result = -1;
    bool check =false;
    for (int i=n;i>=0;i--){
        if (a[i]>-1 ){
            result = a[i];
            check =true;
            break;
        }
    }
    if (check){
        cout<<result;
    }else {
        cout<<-1;
    }
    return 0;
}