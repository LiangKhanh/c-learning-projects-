#include <iostream> 
using namespace std; 

int main () {
    int a,b; 
    cin >> a >>b;
    if ( a == 0 && b == 1) cout << "A WON";
    if ( a == 1 && b == 2) cout << "A WON";
    if ( a == 2 && b == 0) cout << "A WON";
    if ( b == 2 && a == 0) cout << "B WON";
    if ( b == 0 && a == 1 ) cout << "B WON";
    if ( b == 1 && a == 2) cout << "B WON";
    else if ( a==b) cout << "DRAW";
}