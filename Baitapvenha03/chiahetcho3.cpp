#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;

// xác định số đó là mấy chữ số ? 
// tìm các số mà chia hết cho 3 gồm bao nhiêu đó chữ số 
// tìm các số chỉ khác số ban đầu đúng 1 chỗ. 
// so sánh và tìm ra số lớn nhất. 

int main () {
    long long n; 
    cin >> n;
    string s = to_string(n);
    long long count = 0;
    long long maxnum = -1;

    //tìm các số chia hết cho 3 gồm đúng n chữ số.
    // biến đổi từng vị trí, vị trí đầu != 0 
    for (long long i = 0; i < s.size(); i++){
        char sobandau = s[i];
        for ( char sodangxet = '0'; sodangxet <= '9'; sodangxet++ ){
            s[i] = sodangxet;
            if (sobandau == sodangxet) continue;
            long long newnum = stoll(s);
            if (newnum % 3 == 0){
                maxnum = max (newnum, maxnum);
            }
        }
        s[i] = sobandau;
    }
    cout << maxnum;
    return 0;
}