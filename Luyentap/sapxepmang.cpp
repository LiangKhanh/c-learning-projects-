#include <bits/stdc++.h>
    #define ll long long 
    using namespace std;

    int main (){
        ll n; 
        cin >> n;
        ll a[n];
        for ( ll i = 0; i<n; i++){
            cin >> a[i];
        }

        for ( ll i = 0; i<n; i++){
            for ( ll j = i + 1; j < n; j++){
                ll temp = a[i];
                ll temp2 = a[j];
                if (temp2 < temp){
                    a[i] = temp2;
                    a[j] = temp;
                }
            }
        }
        for (ll i = 0; i<n; i++){
            cout << a[i] << " ";
        }
    }