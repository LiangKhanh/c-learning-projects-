#include <iostream> 
using namespace std; 

int main (){
    int n; 
    cin >> n; 
    int count = 0; 
    int i = 1; 
    while (i<=n ){
        for ( int j = i; j<=n ; j++ ) {
            if (i*i + j*j == n*n) {
                count += 1;
            }
        }
        i++;
    }
    cout << count; 
    return 0;
}