#include <iostream> 
#include <cmath> 
using namespace std; 

bool isPrime (long long n){
    if (n <= 1 ) return false;
    for ( int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main () {
    long long n; 
    cin >> n;
    long long prime;
    long long count = 0;
    for ( long long i = n; i>0 ; --i){
        if (isPrime(i)) {
            prime = i;
            count++;
        }
        if (count == 2) break;
     }
     cout << prime;
    
}