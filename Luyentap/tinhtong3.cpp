#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    ll n; 
    cin >> n;
    double sum = 0.0;
    while (n>0){
        sum += 1.0/(n*(n+1.0));
        n--;
    }
    cout << fixed << setprecision (5) << sum;
}