#include <bits/stdc++.h>
using namespace std;

long long  gcd(long long  a, long long  b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Hàm chuyển số thập phân thành phân số tối giản
void decimalToFraction(double decimal) {
    // Chuyển số thập phân thành phân số
    long long  precision = 100000000000; // Độ chính xác (số chữ số thập phân)
    long long  numerator = round(decimal * precision);
    long long  denominator = precision;

    // Rút gọn phân số
    long long  divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // In ra phân số tối giản
    cout << numerator << "/" << denominator << endl;
}

int main (){
    long long n; 
    cin >> n;
    long long  a[n];
    for ( long long  i = 0; i < n; i++){
        cin >> a[i];
    }
    long long  sum = 0;
    for ( long long  i = 0; i < n; i++){
        sum += a[i];
    }
    double TB = sum/double(n);
    double sum2 = 0.0;
   
    for ( long long  i = 0; i < n ; i++ ){
        sum2 +=( double(a[i])-TB)*(double(a[i])-TB)/double(n);
    }
    decimalToFraction(sum2);
}