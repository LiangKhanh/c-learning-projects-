#include <iostream>
using namespace std; 
bool isPrime (long long n ){
    if (n<=1) return false; 
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false; 
    for ( long long i = 5; i*i <= n; i += 6){
        if (n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}
long long daoso (long long num){
    long long sodao = 0;
    while (num > 0){
        sodao = sodao *10 + num % 10;
        num /= 10;
    }
    return sodao;
}

int main (){
    long long a,b;
    cin >> a >> b;
    long long count = 0;
    for (long long i = a; i <= b; i++){
        if (isPrime(i) && isPrime(daoso(i))){
            count++;
        }
    }
    cout << count;
    return 0;
}
        
