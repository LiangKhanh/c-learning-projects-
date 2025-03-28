
#include <iostream>
using namespace std;

int giaithua1(int k){
  if ( k == 1 || k ==0 ) return 1;
  if ( k > 0 ) return k*giaithua1(k-1);
}
// tim mot so giai thua lon n
// cho ham goi lai ntn ma k tang dc
// roi xet giaithua cua k;
int smallest_factorial_notless_than (int n, int k = 1){
  if ( giaithua1(k) < n){
    return smallest_factorial_notless_than (n,k+1); // mỗi lần gọi là nếu không thỏa là biến mất đi gọi lại cái khác.
  }
  if ( giaithua1(k) >= n) return giaithua1(k);
}

int main() 
{
int n;
cin >> n;
cout << smallest_factorial_notless_than(n);
}