#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main (){
    int n;
    cin >> n;
    ll a[n];
    for ( int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll max = a[0] + a[n-1];
    ll n1 = a[n-1], n2 = a[0];
    for ( int i = 1; i<n; i++){
        if ( (a[i] + a[i-1]) >= max ){
            max = a[i] + a[i-1];
            n1 = a[i-1];
            n2 = a[i];
        }
    }
    cout << n1 << " " << n2;

}