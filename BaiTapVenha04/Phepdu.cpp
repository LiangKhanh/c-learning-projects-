#include <iostream> 
using namespace std;

// tìm 1 số giảm dần đến khi nào chia hết cho số chia 
int modulo(int m, int n){
    if ( m >= n) return modulo(m-n, n);
    if ( m < n ) return m; // retun ở đây là hàm sẽ trả về cái ô biến thứ nhất 
}


int main (){
    int m,n;
    cin >> m >> n;
    cout << modulo (m, n);
    return 0;
}