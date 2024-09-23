#include <iostream>
using namespace std;
int main (){
    int n;
    int pos;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = 999999;
    bool found =false;
    for (int i=0;i<n;i++){
        if (a[i]>0){
            if (min<a[i]){
                min =a[i];
             pos = i;
            }
            found =true;
        }
    }

if (found){
    cout<<pos +1 ;
}else{
    cout<<-1;
}
return 0;
}
    
