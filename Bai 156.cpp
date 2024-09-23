#include <iostream>
using namespace std;
int main(){
    int n;
    int result;
    int x;
    int min;
    
    cin>>n;
    cin>>x;
    int a[n];
    for (int i =0;i<n;i++){
        cin>>a[i];
        
    }
    int answer = a[0];
    for (int i=1;i<n;i++){
        min =a[0]-x;
        result= a[i]-x;
        if (result <min){
            answer = a[i];
        }

    }
    cout<<answer;
}