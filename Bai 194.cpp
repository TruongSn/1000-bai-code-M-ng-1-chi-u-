#include <iostream>
#include <cmath>
using namespace std;
void lietke (int a[], int n){
    int khoangcach = abs(a[0]-a[1]);
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n-1;j++){
            if (abs(a[i]-a[j])<khoangcach){
                khoangcach = abs(a[i]-a[j]);
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (abs(a[i]-a[j])==khoangcach){
                cout<<abs(a[i]-a[j]);
            }
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
    void lietke(a,n);
    return 0;

}