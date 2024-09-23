#include <iostream>
#include <climits>

using namespace std;
int main (){
    int n;
    int max = INT_MIN;
    cin>>n;
    int k;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int  i=0;i<n;i++){
        if (max <a[i]){
            max = a[i];
        }
   }
   for (int i=0;i<n;i++)
        if (max == a[i]){
            k = i;
            for (int j=k;j<n;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}