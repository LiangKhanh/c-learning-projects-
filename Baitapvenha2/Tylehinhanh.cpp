#include <iostream> 
using namespace std; 

int main () {
    int a,b,c,d,k,m;
    cin >> a >> b >> c >> d;
    double p = (double)a/b;
    double g = (double)c/d; 
    if ( g>p ) {
        cout << a << " ";
        k = (a*d)/c;
        cout << k;
    }
    if ( p>g ) {
        m = (c*b)/d;
        cout << m << " ";
        cout << b;
    }
}