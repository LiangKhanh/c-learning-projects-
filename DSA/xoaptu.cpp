#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll n;
    cin >> n;
    ll a[100];
    for ( ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll k; 
    cin >> k;
    for ( ll i = k; i < n-1; i++){
        a[i] = a[i + 1];
    }

    for ( ll i = 0; i < n-1; i++){
        cout << a[i] << " ";
    }
    return 0;


}