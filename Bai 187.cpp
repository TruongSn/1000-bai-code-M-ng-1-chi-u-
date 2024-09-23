#include <iostream>
using namespace std;
int find (int a[], int n){
    int min = 9999999;

    for (int i=0;i<n;i++){
        if (a[i]>0){
            if (a[i]<min){
                min = a[i];
            }
        }
    }
    return min;
}

int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int answer = find(a,n);
    for (int i=0;i<n;i++){
        if (a[i]==answer){
            cout<<i+1<<" ";
        }
    }
    return 0;
}