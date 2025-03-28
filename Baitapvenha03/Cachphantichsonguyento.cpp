#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    for (long long i = 2; i <= n / 2; i++) {
        long long j = n - i;
        if (isPrime(i) && isPrime(j)) {
            count++;
        }
    }

    cout << count;
    return 0;
}