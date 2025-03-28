#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main (){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for ( ll i = 0; i<n; i++){
        cin >> a[i];
    }
    for ( ll i = 0; i<n; i++){
        for ( ll j = i + 1; j < n; j++){
            ll temp = a[i];
            ll temp2 = a[j];
            if ( temp2 > temp){
                a[i] = temp2;
                a[j] = temp;
            }
        }
    }

    vector <ll> a2;
    a2.push_back (0);

    for (ll i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            a2.push_back(a[i-1]);
        }
        if ( i == n - 1) a2.push_back (a[n-1]);
    }
    ll count = 0;
    for ( ll i = 0; i<a2.size(); i++){
        count += 1;
    }
    if ( k <= count ){
        cout << a2[k];
    }
    else {
        cout << "NO VALUE";
    }
    
}