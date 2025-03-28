#include <iostream>
#include <cmath> 
using namespace std;

bool isPower (long long base, long long num) {
    long long results = 1;
    while (results < num) {
        results *= base;
    }
    return results == num;
}


int main () {
// nạp số vào mảng đến 0 thì dừng nạp 
// kiểm tra điều kiện số nguyên có phải là lũy thừa với số mũ nguyên của số nguyên khác 
//-> vòng lặp for kiểm tra i là cơ số với giá trị tối ta là a[i] đó thôi 
// nếu là thỏa điều kiện thì số a[i] đang kiểm tra hiện tại thỏa xuất ra 1 
long long a[1000];
long long n = 0;
for (long long i = 0; i < 1000; i++){
    cin >> a[i];
    n+=1;
    if (a[i]==0) break;
}
for (long long i = 0; i < n; i++) {
    bool found = false;
    for (long long j = 2; j*j <= a[i]; j++){
        if (isPower (j,a[i])) {
            found = true;
            break;
        }
    }
    if (found) {
    cout << "1" << endl;
    } else {
    cout << "0" << endl;
}
}
return 0;
}