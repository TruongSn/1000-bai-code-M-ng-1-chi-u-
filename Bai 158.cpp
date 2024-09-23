#include<iostream>
#include <cmath>
using namespace std;

int find_min (int a[], int n){
    int min =999999;
    for  (int i=0;i<n;i++){
        if (a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int find_max(int a[], int n){
    int max = -99999;
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main (){
    int n;
    int min,max;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        min = find_min(a,n);
        max = find_max(a,n);
    }
    if (abs(max)>abs(min)){
        cout<<-max<<" "<<max;
    }
    if (abs(max)<abs(min)){
        cout<<min<<" "<<abs(min);
    }
    return 0;
}