#include <iostream>
using namespace std;
int KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    int b[n];
    for (int i=0;i<n;i++){
        if (check [a[i]]==1){
            b[j]=a[i];
            j++;
        }
    }
    for (int i=0;i<j;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}