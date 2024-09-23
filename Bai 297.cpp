#include <iostream>
using namespace std;
int sum (int b[], int n){
    int sum =0;
    for (int i=0;i<n;i++){
        sum+=b[i];
    }
    return 0;
}

int kiemtratangdan (int b[], int nb){
    for (int i=0;i<n;i++){
        if (b[i]>b[i+1]){
            return 0;
        }
    }
    return 1;
}

void xuatmangcon (int b[], int nb){
    for (int i=0;i<nb;i++){
        cout<<b[i];
    }
    cout<<endl;
}

void tinh_tong_tung_mang_con_tang (int a[], int n){
    int chieudaicon,tong;
    int b[100];
    int nb;
    for (int i=0;i<n;;i++){
        for (chieudaicon=1;chieudaicon<=n;chieudaicon++){
            nb=0;
            for (int j=i;j<chieudaicon;j++){
                b[nb]=a[j];
                nb++;
            }
            if (kiemtratangdan(b,nb)==1){
                xuatmangcon(b,nb);
                tong = sum(b,nb);
                cout<<tong<<endl;
            }
        }
    }
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 void tinh_tong_tung_mang_con_tang (a,n);
 return 0;
}