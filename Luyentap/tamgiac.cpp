#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main (){
    double a,b,c;
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a){
        double p = (a+b+c)/2;
        double s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << p*2 << " ";
        cout << fixed << setprecision(2) << s;
    }
    else cout << "NO";
    return 0;
}