#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    //dãy 1
    ll n;
    cin >> n;
    ll an[n];
    for ( ll i = 0; i < n; i++){
        cin >> an[i];
    }

    //dãy 2
    ll k;
    cin >> k;
    ll ak[k];
    for ( ll i = 0; i < k; i++){
        cin >> ak[i];
    }
    ll h = k + n;
    ll c[h];
    for (ll i = 0; i < h; i++){
        if (an[i] <= ak[i]){
            c[i] = an[i];
        }
    }
    
}