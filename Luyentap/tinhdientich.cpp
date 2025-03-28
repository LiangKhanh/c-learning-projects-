#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll a;
    cin >> a; 
    double k = double(a*a);
    double s = 3.1415926535897932384626433 *double(a*a);
    double l = (1.0*(s))/4.0 - k;
    cout << fixed << setprecision(3) << 2.0*k + 2.0*l;
}