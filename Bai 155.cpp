#include <iostream>
using namespace std;
int main(){
    int n;
    int result;
    int x;
    int max;
    int answer;
    cin>>n;
    cin>>x;
    int a[n];
    for (int i =0;i<n;i++){
        cin>>a[i];
    }
    for (int i=1;i<n;i++){
        max =a[0]-x;
        result= a[i]-x;
        if (result >max){
            answer = a[i];
        }

    }
    cout<<answer;
}