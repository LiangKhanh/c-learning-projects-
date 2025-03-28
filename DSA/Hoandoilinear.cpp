
// khong nao nho hon no, la duy nhat
// khong nao lon hon, o sau.
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll n;
    cin >> n;
    ll a[n];
    for (ll i =0; i < n; i++){
        cin >> a[i];
    }
    ll min = 1000000;
    ll max = -1;
    ll b,c;
    for (ll i =0; i < n ; i++ ){
        if(a[i]<min){
            min = a[i];
            b = i;
        }
        if(a[i]>=max){
            max = a[i];
            c = i;
        }
    }
    swap(a[b],a[c]);
    for(ll i;i<n;i++) cout << a[i] << " ";
}
