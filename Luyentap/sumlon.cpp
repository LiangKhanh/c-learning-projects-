#include<bits/stdc++.h>
#define ll long long
using namespace std;

// double tong ( double n){
//     if ( n == 0) return 0;
//     if ( n > 0) return n + tong (n-1);
// }

// double sum(double n){
//     if ( n == 0) return 0.0;
//     if ( n > 0) return sum (n-1) + 1/tong(n);
// }

int main (){
    ll t;
    cin >> t;
    while (t--){
        double n;
        cin >> n;
        cout << fixed << setprecision(8) << (2.0*n)/(n+1.0) << endl;
    }
    return 0;
}