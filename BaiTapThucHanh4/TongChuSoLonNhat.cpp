#include <iostream> 
using namespace std; 

int hamcongso(long long num){
    long long k = 0;
    while (num > 0){
        k = k + num % 10;
        num /= 10;
    }
    return k;
}
int main () {
    long long n;
    cin >> n;
    long long a[n];
    for ( long long i = 0; i < n; i++){
        cin >> a[i];
    }
    long long max = hamcongso(a[0]);
    long long temp = a[0];
    for (long long i = 0; i < n; i++){
        long long dx = hamcongso(a[i]);
        if (dx > max){
        max = hamcongso(a[i]);
        temp = a[i];
        }
    }
    cout << temp;
}