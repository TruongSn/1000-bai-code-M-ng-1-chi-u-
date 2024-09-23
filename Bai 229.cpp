#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    for (int i=0;i<n;i++){
        flag = 1;
        for (int j=i+1;j<n-1;j++){
            if (a[i]==a[j]){
                flag =0;
                break;
            }

        }
        if (flag==1){
            count++;
        }
    }
    cout<<count;
    return 0;
}