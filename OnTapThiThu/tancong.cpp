#include <bits/stdc++.h> 
using namespace std;

int main (){
    int n; 
    cin >> n;
    double a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    double x,y,z;
    cin >> x >> y >> z;


    double sum = 0.0;

    for ( int i = 0; i < n; i++){
        double time = a[i];
        int count = 0.0;
        for ( int j = 0; j<i; j++){
            if ( time - a[j] <= z){
                count++;
            }
        }
        sum += x + (count)*y;
    }
    cout << sum;
    return 0;
}