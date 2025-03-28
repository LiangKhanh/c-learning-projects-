#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[101][101];
ll n, m;

int main(){
    cin >> n >> m;
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++) cin >> a[i][j];
    }
    ll tmp[101][101];
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++) tmp[j][n-i-1] = a[i][j];
    }
    swap(n, m);
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++) a[i][j] = tmp[i][j];
    }
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m/2; j++) swap(a[i][j], a[i][m-j-1]);
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}