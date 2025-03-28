#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

bool nguyento(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    for (long long m = n + 1; ; m++) {
        long long temp = gcd(m, n);
        if (nguyento(temp) ) {
            cout << m;
            break;
        }
    }
    return 0;
}