#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n) {
    while (n > 0) {
        ll digit = n % 10;
        if (digit % 2 == 0 || digit == 0) return true;
        n /= 10;
    }
    return false;
}

ll tim_so(ll n) {
    if (n<=1000000000) {
    for (ll i = n-1; i > (n/2); --i) {
        if (!check(i)) return i;
    }
    }
    if (n>1000000000) {
         for (ll i = n-800000000; i > (n/2); --i) {
        if (!check(i)) return i;
    }  
    }
    return 0; 
}

int main() {
    ll n; cin >> n;
    cout << tim_so(n) << endl;
    return 0;
}