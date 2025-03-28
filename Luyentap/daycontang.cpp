#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll t;
    cin >> t;
    ll a[t];
    for ( ll i = 0; i < t; i++){
        cin >> a[i];
    }
    vector <ll> k;
    // dãy tăng là dãy có các số lớn hơn kể từ số đang xét. nếu số sau lớn hơn số trc thì tiếp tục. 
    for ( ll i = 0; i<t; i++){
        ll max = a[i];
        ll count = 1;
        for ( ll j = i + 1; j < t; j++){
            if ( a[j] > max ){
                max = a[j];
                count++;
            }
        }
        k.push_back (count);
    }
    ll max = k[0];
    for (ll i = 0; i < k.size(); i++){
        if (k[i] > max){
            max = k[i];
        }
    }
    cout << max;
    return 0;
}