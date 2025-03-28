#include <iostream>
using namespace std;

int main () {
    int a; 
    cin >> a; 
    for (int i = a; i <= a; i--) {
        if (a % i == 0 ) cout << i << " ";
        if ( i == 1 ) {
            break;
        }
    }
    return 0;
}