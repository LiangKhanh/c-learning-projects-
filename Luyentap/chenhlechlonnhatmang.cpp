#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main (){
    ll n; 
    cin >> n;
    ll a[n];
    for ( ll i = 0; i<n; i++){
        cin >> a[i];
    }
    ll diff = 0;
    for (ll i = 0; i < n; i++){
        for ( ll j = 0; j<n; j++){
            if ( abs(a[i] - a[j]) > diff){
                diff = abs(a[i] - a[j]);
            }
        }
    }
    cout << diff;
}