#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 7. Viết chương trình cho phép người dùng nhập vào một ngày (ngày tháng năm). Kiểm tra tính hợp lệ và xuất ra màn hình ngày kế tiếp.

class date{
private :
    ll ngay;
    ll thang;
    ll nam;
public : 
    void nhap(){
        cout << "Nhap ngay: ";
        cin >> ngay;
        cout << "Nhap thang: ";
        cin >> thang;
        cout << "Nhap nam: ";
        cin >> nam;
    }
    bool ktra(){
        if ( ngay > 31 || ngay < 1 ) return false;
        if ( thang > 12 || thang < 1 ) return false;
        if ( nam < 1 ) return false; 
        else return true;
    }
    string layThuTrongTuan() {
        if (thang < 3) {
            thang += 12;
            nam--;
        }
        ll k = nam % 100;
        ll j = nam / 100;
        ll h = (ngay + ((13 * (thang + 1)) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
        const char* cacThu[] = {"Thu Bay", "Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau"};
        return cacThu[h];
    }
    void xuat(){
         cout << "Ngay " << ngay << " " << "Thang" << " " << thang << " " << "Nam" << " " << nam << " " << "la: ";
    }

};

int main (){
    date d;
    bool hople = false;
    while (!hople){
        d.nhap();
        hople = d.ktra();
        if (!hople){
            cout << "Ngay thang nam chua hop le, vui long nhap lai" << endl;
        }
    }
    d.xuat();
    cout << d.layThuTrongTuan();
}