#include<bits/stdc++.h>
using namespace std;

int main (){
    long long n;
    cin >> n;
    long long a[2][n];
    for (long long i = 0; i < 2; i++){
        for ( long long j = 0; j<n; j++){
            cin >> a[i][j];
        }
    }
    long long max = -1;
    for (long long i = 0; i < 1; i++){
        for ( long long j = 0; j<n; j++){
            if ( a[i][j] >= max){
                max = a[i][j];
            }
        }
    }
    long long min = 10000000000;
    for (long long i = 1; i < 2; i++){
        for ( long long j = 0; j<n; j++){
            if ( a[i][j] <= min){
                min = a[i][j];
            }
        }
    }
    long long res = min - max;
    if (res < 0) cout << 0;
    else cout << res+1;
    return 0;
}