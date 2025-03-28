#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void quick (ll *a, ll l, ll r){
    ll pivot = a[(l+r)/2];
    ll i = l; ll j = r;
    while ( i < j){
        // ý tưởng của quicksort là gì ? 
        while ( a[i] < pivot){
            i++;
        }
        // tại sao lại cần tới pivot 
        while ( a[j] > pivot){
            j--;
        }
        // tại sao lại có điều kiện này ? 
        if ( i <= j){
            ll temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            // bắt đầu l và r di chuyển lên đến khi nào đụng pivot thì thôi => tức mảng chia ra thành 2 nửa kể từ vị trí pivot.
            i++;
            j--;
        }
    }
    if ( i < r ){
        quick( a, i , r);
    }
    if ( l < j){
        quick(a, l, j);
    }
}
void xuat ( ll a[], ll n){
    for (ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    ll n; 4cin >> n;
    ll k = 0;
    ll a[100000];
    for ( ll i = 0; i<n; i++){
        cin >> a[i];
    }
    quick(a,0, n -1);
    bool batthuong = false;
    ll i, j;
    for ( i = 1; i < n; i++){
        j = i - 1;
        // nếu phát hiện bất thường thì break
        ll nho = a[i] - a[j];
        if ( nho >= 2 ){
            batthuong = true;
            break;
        }
    }
    xuat (a, n);
    if (batthuong){
        cout << a[j] + 1;
    }
    else cout << a[i-1] + 1;

}