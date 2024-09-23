#include <iostream>
using namespace std;

void lietke (int a[], int n){
    int chieudai;
    for (int i=0;i<n;i++){
        for (chieudai = 1;chieudai<=n;chieudai++){
            for (int j=i;j<chieudai;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    lietke(a,n);
    return 0;
}