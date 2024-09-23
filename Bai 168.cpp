#include <iostream>
#include <cmath>

using namespace std;
int main (){
    int n;
    int k;
    cin>>n;
    cin>>k;
    double a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    bool check =false;
    int result =-1;
    for (int i=0;i<n;i++){
        if (a[i]==pow(5,k)){
            result =a[i];
            check =true;
        }
    }
    if (check){
        cout<<result;
    }else {
        cout<<-1;
    }
    return 0;
}