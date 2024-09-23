#include <iostream>
using namespace std;
int kiemtratangdan (int b[], int nb){
    for (int i=0;i<nb;i++){
        if (b[i]>b[i+1]){
            return 0;
        }
    }
    return 1;
}

void demmangcontang(int a[], int n){
    int chieudaicon, dem = 0;
    int b[100], nb;
    for (int i=0;i<n;i++){
        for (chieudaicon = 2+i;chieudaicon<=n;chieudaicon++){
            nb=0;
            for (int j=i;j<chieudaicon;j++){
                b[nb]=a[j].;
                nb++;
            }
            if (kiemtratangdan(b,nb)==1){
                dem++;
            }
        }
    }
    cout<<dem;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    demmangcontang (a,n);
    return 0;
}