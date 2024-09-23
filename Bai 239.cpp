#include <iostream>
using namespace std;
bool isPrime (int n){
    if (n<=1){
        return false;
    }else {
        for (int i=2;i<n;i++){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }
}
int main (){
    int n;
    int count =0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for (int i=0;i<n;i++){
        bool flag =true;
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                flag = false;
                break;
            }
        }
        if (flag && isPrime (a[i])){
            count++;
        }
    }
cout<<count;
return 0;
}