#include <iostream>
using namespace std;

bool check (int n){
    int final_digit = n%10;
    return final_digit;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i>n;i++){
        cin>>a[i];
    }
    int count =0;
    for (int i=0;i<n;i++){
        if (check(a[i])==5){
            count++;
        }
    }
    cout<<count;
    return 0;

}