#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = a[0];
    for (int i=1;i<n;i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    bool check = false;
    int result;
    int factorial = 1;
    for (int i=0;i<n;i++){
        factorial = a[i]*factorial;
    }
    for (int i=max;i<=factorial;i++){
        for (int j=0;j<n;j++ ){
            if (i%a[j]==0){
                check = true;
                result = i;
                break;
            }
        }
    }
    cout<<result;
    return 0;

}