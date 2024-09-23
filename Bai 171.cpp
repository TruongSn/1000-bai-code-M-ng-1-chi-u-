#include <iostream>
using namespace std;


int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int min =a[0];
    for (int i=0;i<n;i++){
        if (min>a[i]){
            min= a[i];
        }
    }
    int result;
    bool check = false;
    for (int uoc_so = min;uoc_so>=1;uoc_so--){
        for (int i=0;i<n;i++){
            if (a[i]%uoc_so==0){
                check =  true;
                result = uoc_so;
            }
        }
    }

    if (check){
        cout<<result;
    }
    return 0;
}