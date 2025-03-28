#include <iostream> 
using namespace std; 

int main () {
    string s; 
    cin >> s;
    int count = 0; 
    for ( int i = 0; i<s.size(); i++) {
        if (s[i] %2 == 0) {
            count += 1;
        }
    }
    if (count >= 1) cout << "TRUE";
    else cout << "FALSE";
}