#include <iostream>
using namespace std;
int revert (int n){
    int final_digit;
    int revert_number =0;
    while (n!=0){
        final_digit=n%10;
        revert_number = revert_number*10+ final_digit;
        n=n/10;
    }
    return revert_number;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for (int i=0;i<n;i++){
        if (a[i]==revert(a[i])){
            sum+= a[i];
        }
    }
    cout<<sum;

}