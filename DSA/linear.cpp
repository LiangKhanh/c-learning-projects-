#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll n;
    cin >> n;
    ll a[n];
    for (ll i =0; i < n; i++){
        cin >> a[i];
    }
    ll k;
    cin >> k;
    ll i = 0;
    for (i; i < n; i++){
        if ( a[i]== k){
            cout << i;
            break;
        }
    }
    if ( i >= n ) cout << "-1";
}
