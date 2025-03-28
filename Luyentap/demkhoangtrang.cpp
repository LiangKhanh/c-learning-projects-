#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after the number input bỏ cái enter đi để cin ở dưới đc máy tính xử lý
    vector<string> a(n);
    for (ll i = 0; i < n; i++) {
        getline(cin, a[i]);
    }
    // Count the number of continuous sequences of spaces in each string
    for (ll i = 0; i < n; i++) {
        ll count = 0;
        bool in_space = false;
        for (ll j = 0; j < a[i].size(); j++) {
            //a[i] là 1 chuỗi được xem là 1 mảng nhỏ [j] vào là đang xét cái chuỗi đó.
            if (a[i][j] == ' ') {
                if (!in_space) { // tức là nói cho máy tính là chúng ta đang ở ký tự khoảng trống ( tức khác false/ hay chỗ này phải là true ấy thì máy tính mới thực thi )
                // lúc sau in_space = true rồi tức !in_space sẽ = false => ko thỏa, máy tính ko thực thi câu lệnh dưới
                    count++;
                    in_space = true;
                }
            } else {
                in_space = false;
            }
        }
        cout << count << endl;
    }
    return 0;
}