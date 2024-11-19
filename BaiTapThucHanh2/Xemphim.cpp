#include <iostream> 
using namespace std; 

int uocsochunglonnhat (int a, int b){
    if (b==0) return a;
    return uocsochunglonnhat (b, a%b);
}

int main () {
    int a,b,c;
    cin >> a >> b >> c;
    int k,m,l;
    cin >> k >> m >> l;
    int o = a*60*60 + b*60 + c;
    int i = k*60*60 + m*60 + l;
    int uocsochunglonnhat1 = uocsochunglonnhat (o,i);
    int tu = i/uocsochunglonnhat1;
    int mau = o/uocsochunglonnhat1;
    cout << tu << " " << mau;
    return 0;
}