#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    d= a[1]-a[0];
    int flag = 1;
    for (int i=2;i<n-1;i++){
        if (a[i+1]-a[i]!=0){
            flag = 0;
            break;
        }
      
    }
      if (flag==1){
            cout<<"1";
        }else if(flag==0){
            cout<<"0";
        }
        return 0;
    
}