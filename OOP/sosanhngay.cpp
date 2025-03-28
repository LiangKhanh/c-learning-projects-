#include <bits/stdc++.h>
#define ll long long 
using namespace std;

struct day {
    ll ngay;
    ll thang;
    ll nam;

    // Hàm tạo không tham số
    day() {}

    // Hàm tạo có tham số
    day(ll d, ll m, ll y) : ngay(d), thang(m), nam(y) {}

    // Hàm so sánh
    ll sosanh(const day &x, const day &y) {
        if (x.nam < y.nam) return 1;
        if (x.nam > y.nam) return -1;
        if (x.thang < y.thang) return 1;
        if (x.thang > y.thang) return -1;
        if (x.ngay < y.ngay) return 1;
        if (x.ngay > y.ngay) return -1;
        return 0;
    }

    // Định nghĩa toán tử nhập
    // cần phải định nghĩa toán tử nhập cho đối tượng vì để cho chương trình biết là mình sẽ nhập dữ liệu như thế nào cho đối tượng được nhắc tới 
    friend istream& operator>>(istream& is, day& d) {
        is >> d.ngay >> d.thang >> d.nam;
        return is;
    }
};

int main() {
    day ng1;
    cin >> ng1;
    day ng2(7, 1, 2017);
    ll kq = ng1.sosanh(ng1, ng2);
    if (kq == 1) cout << "trc";
    else if (kq == 0) cout << "cùng";
    else cout << "sau";
    return 0;
}