#include <bits/stdc++.h>
using namespace std;

int main (){
    int n  ;
     cin >> n;
    int a[n] ;
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort (a, a+n);
    int count = 0;
    for ( int i = 1; i < n; i++){
        int k = abs(abs(a[i])-abs(a[i-1]));
        int m = k - 1;
        count += m;
        
        
    }
    cout << count;
}