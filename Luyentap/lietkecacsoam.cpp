#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll k = 0;
    ll a[10000];
    while (true){
        cin >> a[k];
        if (a[k]==0) break;
        k++;
        
    }
    //liệt kê các số âm
    int count = 0;
    for ( ll i = 0; i < k; i++){
        if (a[i] < 0 ){
            cout << a[i] << " ";
            count++;
        }
    }
    if (count == 0 ) cout << "NOT FOUND";

}