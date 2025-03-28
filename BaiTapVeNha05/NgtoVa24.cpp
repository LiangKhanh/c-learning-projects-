#include <iostream>
#include <cmath>
using namespace std;

// hàm kiểm tra số nguyên tố 
// cho số đó về dạng int khi căn để mất dấu "," đằng sau.
// cho b chạy
// b = 0; count = 0; 
// thay b vào công thức int m = căn 24*b + 1;
// count += 1;
// kiểm tra m có phải là số nguyên tố 
// có thì cout << count 
// không thì cho b chạy tiếp 

bool isPrime (long long n){;
if ( n <= 1) return false; 
if ( n <= 3 ) return true; 
if ( n % 2 == 0 || n % 3 == 0) return false;
for ( int i = 5; i*i <= n; i += 6){
    if ( n % i == 0 || n % ( i + 2) == 0) return false;
}
return true;
}

int main (){
    long long n = 17; 
    cin >> n; 
    int count = 0;
    for ( long long i = n+1; i > 0; i++){
        long long m = sqrt(24*i + 1);
        count += 1;
        if ( m*m == 24 * i + 1 && isPrime(m)) break; 
    }
    cout << count;
}