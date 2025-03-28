#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll n;
    cin >> n;
    ll a[n];
    for ( ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll countIC = 0;
    ll countDC = 0;
    for ( ll i = 1; i < n; i++){
        bool IC = false;
        bool DC = false;
        if (( a[i]-a[i-1] )>= 0){
            IC = true;
            countIC++;
        }
        if (!IC){
            if ((a[i]-a[i-1] <= 0)){
                DC = true;
                countDC++;
            }
        }
    }
    if (countIC == n-1 || countDC == n-1) cout <<"YES";
    else cout << "NO";
}