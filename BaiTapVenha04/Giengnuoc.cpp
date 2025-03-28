#include <iostream> 
using namespace std;

// ném n lần tăng k = a+1 và m = b+1 lên n lần;
// cho mỗi hàm tăng a , b 1 bộ đếm = n thì dừng tăng 
// sau mỗi lần ném cộng k và m 

int well ( int a, int b, int n){
    if ( n > 0) return a*b + well (a+1, b+1,n-1);
    if ( n == 0) return 0;
}

int main (){
    int a,b,n; cin >> a >> b >> n;
	cout << well(a, b, n);
}