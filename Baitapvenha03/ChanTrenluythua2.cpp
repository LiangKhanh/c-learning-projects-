#include <iostream>
using namespace std; 

int main () {
    // kiểm tra số lớn nhất trong vòng lặp 
    // cho số lớn nhất đó bằng temp
    // thêm một vòng lặp tìm số 2^k chạy từ từ, bắt đầu từ 1 đồng thời so sánh 2^k đó với số lớn nhất trong dãy vừa tìm được. 

    long long n;
    cin >> n; 
    long long a[n];
    long long temp; 
    for (long long i = 0; i <= n-1; i++) {
        cin >> a[i];
        }
    temp = a[0];
    for (long long i = 0; i<=n-1; i++ ) {
        if (a[i] > temp){
            temp = a[i];
        }
    }
    long long k=1;
    while (k< temp) {
        k*=2;
    }
    cout << k;
    return 0;
}