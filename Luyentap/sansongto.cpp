#include <bits/stdc++.h>
#define ll long long 
using namespace std;

bool prime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main (){
    ll n;
    cin >> n; 
    for (ll i = 1; i <= n; i++){
        if (prime(i)){
            cout << i << " ";
        }
    }
    return 0;
}