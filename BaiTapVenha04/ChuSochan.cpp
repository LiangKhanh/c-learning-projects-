#include <iostream>
using namespace std; 

// tách số ra
// cho số đó vào 1 biến
// xem biến đó có chia hết cho 2 hay không, có thì return true; 
// không thì gọi lại hàm đầu vào chia 10

bool chan (int n){
    if (n > 0){
        int k = n % 10;
        if ( k % 2 == 0) return true;
        else return chan (n/10);
    }
    if ( n <= 0) return false;
}

int main (){
    int n; cin >> n;
    if (chan(n)) cout << "TRUE";
    else cout << "FALSE";
}