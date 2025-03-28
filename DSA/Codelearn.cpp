#include<bits/stdc++.h>
using namespace std;

int Bin_S( int* a, int n, int x){
    int left = 0;
    int right = n -1;
    // sẽ đến 1 thời điểm l và r bằng nhau.
    while ( left < right){
       int mid = (left + right)/2;
        if ( a[mid] >= x ){
            right = mid-1;
        }
        else left = mid +1;
    }
    //nếu như xuất mid ngay thì không thể kiếm được phần tử đầu tiên xuất hiện.
    if (a[left] == x) return left;
    return -1;
}

int main (){
    int n; 
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    cout << Bin_S(a, n, x);
}