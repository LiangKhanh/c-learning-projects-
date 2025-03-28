#include<bits/stdc++.h> 
#define ll long long
using namespace std;

// QUEUE ( FIRST IN FIRST OUT)(thêm ở cuối lấy ở đầu)
    // front ( truy cập vào phần tử đầu của queue)
    // back (truy cập vào phần tử cuối cùng được thêm vào )
    // push ( thêm vào phần tử ở cuối queue)
    // pop ( loại bỏ phần tử ở đầu )

int main (){
    ll n;
    cin >> n;
    ll a[n];
    queue <ll> q;
    for ( ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll k;
    cin >> k;
    for ( ll i = 0; i < n; i++){
        q.push(a[i]);
    }
    while (k--){
        ll temp = q.front();
        q.push(temp);
        q.pop();    
    }
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}