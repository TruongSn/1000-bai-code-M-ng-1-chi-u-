#include <iostream>
using namespace std;
int main (){
    int n;
    int sum=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if (a[i]>a[i-1] && a[i]>a[i+1]){
            sum+=a[i];
        }
    }
    cout<<sum;
    return 0;
}