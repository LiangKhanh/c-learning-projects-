#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main (){
    ll k = 0; 
    ll a[10000];
    string line;
    while (true){
        getline (cin, line);
        if ( line.empty()) break;
        a[k] = stoll(line);
        k++;
    }
    vector <ll> v;
    ll j = 0;
    for (ll i = 1; i<k; i++){
        if ( a[i] != a[i-1]){
            v.push_back(a[i-1]);
            j++;
        }
        if ( i == k - 1){
            v.push_back(a[k-1]);
            j++;
        }
    }
    for ( ll i = 0; i < j; i++){
        ll count = 0;
        for ( ll h = 1; h <= v[i]; h++){
            if (v[i] % h == 0){
                count += h;
            }
        }
        if (count != 0){
            cout << count << endl;
        }
    }
}