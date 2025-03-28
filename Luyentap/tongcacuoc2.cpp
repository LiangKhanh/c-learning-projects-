#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll count = 0;
            for ( ll i = 1; i <= sqrt(n); i++){
                if ( n % i == 0){
                    if ( i == n/i){
                        count += i;
                    }
                    else{
                        count += i + n/i;
                    }
                }
            }
        cout << count << endl;
    }
}