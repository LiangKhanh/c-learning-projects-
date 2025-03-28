#include <bits/stdc++.h>
#define ll long long
#define str string 
using namespace std;

bool check(ll n) {
    str s = to_string(n);
    for (char c : s) {
        if ((c - '0') % 2 == 0){
            return true;
        }
    }
    return false;
}

ll tim_so(ll n) {
    for (ll i = n - 1; i > 0; --i) {
        if (!check(i)) {
            return i;
        }
    }
    return 0;
}

int main() {
    ll n; cin >> n;

    cout << tim_so(n);
    return 0;
}