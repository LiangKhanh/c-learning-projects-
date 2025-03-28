#include <iostream>
using namespace std;

void hamdoiso(long long num, long long& result){
    if (num <= 0) return;
    long long k = num % 10;
    result = result * 10 + k;
    hamdoiso(num / 10, result);
}
void tachso ( long long j ){
    if ( j <= 0) return;
    long long m = j % 10;
    cout << m << endl;
    tachso(j/10);
}

int main() {
    long long n;
    cin >> n;
    if ( n < 0) cout << "0";
    if (n == 0) cout << "0";
    long long result = 0;
    hamdoiso(n, result);
    tachso(result);
    return 0;
}