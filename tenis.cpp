#include <iostream> 
using namespace std; 

int main () {
    int a,b;
    cin >> a >> b;
    if (a>b) {
         if (a==6 && b<=4) {
            cout << "1";
         }
         else if (a==7 && b == 6) cout << "1";
         else if (a==7 && b == 5) cout << "1";
            else cout << "0";
    }
    if (b>a) {
        if (a<=4 && b==6) {
            cout << "1";
            }
        else if (a==6 && b == 7) cout << "1";
        else if (a==5 && b== 7) cout << "1";
            else cout << "0";
        
    }
    if (a==b) cout << "0";
    return 0;
    
}