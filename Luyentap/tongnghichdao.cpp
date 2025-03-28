#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        double sum = 0.0;
        for ( ll i = n; i > 0; i--){
            sum += 1.0/double(i);
        }
        cout << fixed << setprecision(5) << sum << endl;
    }
}

