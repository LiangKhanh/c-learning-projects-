#include<iostream>
#include <cmath> 

using namespace std;

int main () {
    int n;
    cin >> n; 
    int a[n];
    int l = 0;
    int g = 0;
    int z = 100;
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m; 
    cin >> m; 

    for ( int i = 0; i < n; i++ ){
        for (int j = i + 1; j < n; j++){
            if ( a[i] + a[j] == m ){ 
                int k = abs (a[i] - a[j]);
                if ( k < z){
                    z = k;
                    l = a[i];
                    g = a[j];
                }
            }
        }
    }
    cout << l << endl << g; 
}