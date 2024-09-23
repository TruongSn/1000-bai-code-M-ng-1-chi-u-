#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = a[0];
    for (int i=1;i<n;i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    for (int i=max; i<max+5;i++){
        if (i%2==0){
            cout<<i;
            break;
        }
    }
    return 0;
}