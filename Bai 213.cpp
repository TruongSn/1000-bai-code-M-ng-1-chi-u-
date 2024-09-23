#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    int sum=0;
    int count = 0;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]>x){
            sum+=a[i];
            count++;
        }
    }
    cout<<double(sum)/count;
}