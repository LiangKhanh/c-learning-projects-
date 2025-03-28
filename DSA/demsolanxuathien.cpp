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
    
    for ( ll i = 0; i < n; i++){
        for ( ll j = i+1; j < n; j++){
            ll temp = a[i];
            ll temp2 = a[j];
            if ( a[j] < a[i] ){
                a[i] = temp2;
                a[j] = temp;
            }
        }
    }
    ll temp = -1;
    for ( ll i = 0; i < n; i++){
        ll count = 1;
        if ( a[i] == temp) continue;
        else if (a[i] != temp){
            for ( ll j = i+1; j < n; j++){
                if ( a[j] == a[i] ){
                    count++;
                }
            }
        }
        temp = a[i];
        cout << a[i] << " - " << count << ";" << " ";
    }

    return 0;


}