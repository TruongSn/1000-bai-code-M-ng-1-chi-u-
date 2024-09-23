#include <iostream>
using namespace std;

// Function to check if the array is in increasing order
int kiemtratangdan(int b[], int nb){
    for (int i = 0; i < nb - 1; i++){
        if (b[i] > b[i + 1]){
            return 0;
        }
    }
    return 1;
}   

// Function to print the subarray
void xuatmangcon(int b[], int nb){
    for (int i = 0; i < nb; i++){
        cout << b[i] << " ";
    }
    cout << endl;
}

// Function to find and print all increasing subarrays
void lietkedaycon(int a[], int n){
    int b[100], nb;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){  // j is the end index of the subarray
            nb = 0;
            for (int k = i; k <= j; k++){  // k goes from i to j
                b[nb] = a[k];
                nb++;
            }
            if (kiemtratangdan(b, nb) == 1){  // Check if the subarray is increasing
                xuatmangcon(b, nb);
            }
        }
    }
}

int main (){
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    lietkedaycon(a, n);
    return 0;
}
