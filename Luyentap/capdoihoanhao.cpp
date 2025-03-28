#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main (){
    int n; 
    cin >> n;
    ll a[n];
    for ( int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll max = 0;
    ll n1 = 0; ll n2 = 0; 
    for ( int i = 0; i<n; i++ ){
        for ( int j = i + 1; j < n; j++){
            if (a[i]*a[j] > max){
                max = a[i]*a[j];
                n1 = a[i];
                n2 = a[j];
            }
        }
    }
    cout << n1*n2;
}