#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool check(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 3 == 0;
}

int main() {
    string n;
    cin >> n;

    ll res = -1; 
    for (size_t i = 0; i < n.length(); i++) {
        char c = n[i];
        for (char digit = '0'; digit <= '9'; digit++) {
            if (digit == c) {
                continue; 
            }
            n[i] = digit;
            ll tmp = stoll(n);
            if (check(tmp)) {
                res = max(res, tmp);
            }
        }
        n[i] = c;
    }

    cout << res << endl;
    return 0;
}