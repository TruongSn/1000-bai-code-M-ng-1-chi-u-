#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j= n-1;
    while (i<j){

        while (i<n/2 && a[i]<=0){
            i++;// Skip non-positive numbers in the first half
        }
        while (j>=n/2 && a[j]<=0){
            j--;//skip non-positive numbers in the second half
        }
         if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
    }
}

for (int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}