#include <iostream>
using namespace std;

int main (){
    string a;
    string b;
    cin >> a >> b;
    if ( a == b) cout << "DRAW";
    else if ( a == "BUA" && b == "KEO") cout << "A WON";
    else if ( a == "KEO" && b == "BAO") cout << "A WON";
    else if ( a == "BAO" && b == "BUA") cout << "A WON";
    else if ( b == "BUA" && a == "KEO" ) cout << "B WON";
    else if ( b == "KEO" && a == "BAO") cout << "B WON";
    else if ( b == "BAO" && a == "BUA") cout << "B WON";
    return 0;
}