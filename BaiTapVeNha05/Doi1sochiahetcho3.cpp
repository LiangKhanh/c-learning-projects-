#include<iostream>
#include <string>
using namespace std;

int main (){
    long long n; 
    long long m = 1;
    cin >> n; 
    string s = to_string(n);
    for ( long long i = 0; i < s.size(); i++){
        char sodangxet = s[i];
        for ( char c = '0'; c <= '9'; c++){
            s[i] = c;
            if ( c == sodangxet) continue;
            long long num = stoll (s);
            if ( num % 3 == 0 && num > m ){
                m = num; 
            }
        }
        s[i] = sodangxet;
    }
    cout << m;

}