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
    ll ngaytrongthang(){
        switch (thang){
            case 4 : case 6 : case 9 : case 11: return 30;
            case 2 : {
                if (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0) ) return 29;
                else return 28;
            }
            default : return 31;
        }
    }
    void ngayke(){
        ngay++;
        if ( ngay > ngaytrongthang()){
            ngay = 1;
            thang++;
            if ( thang > 12){
                thang = 1;
                nam++;
            }
        }
        cout << "Ngay ke tiep la: " << endl << "Ngay " << ngay << " " << "thang " << thang << " " << "nam" << " "<< nam << endl;
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
    d.ngayke();


}