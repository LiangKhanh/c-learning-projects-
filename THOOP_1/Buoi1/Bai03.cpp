#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
    ll tu;
    ll mau;
};
void nhap(PhanSo &x){
    cout << "Tu: ";
    cin >> x.tu;
    cout << "Mau: ";
    cin >> x.mau;
}
ll UCLN(ll a, ll b){
    while (b != 0){
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void RUTGON(ll a, ll b){
    ll k = UCLN(a, b);
    a /= k;
    b /= k;
    cout << a << "/" << b << endl;
}
void Tong_Hieu(PhanSo x, PhanSo y){
    ll MCLN = x.mau * y.mau;
    ll tam1 = MCLN / x.mau;
    x.tu *= tam1;
    ll tam2 = MCLN / y.mau;
    y.tu *= tam2;
    x.mau = MCLN;
    y.mau = MCLN;
    //cộng
    ll tumoi = x.tu + y.tu;
    cout << "Tong hai phan so = ";
    RUTGON(tumoi, MCLN);
    //trừ
    ll tumoi2 = x.tu - y.tu;
    cout << "Hieu hai phan so = ";
    RUTGON (tumoi2, MCLN);
}

void Tich ( PhanSo x, PhanSo y){
    ll tumoi = x.tu *y.tu;
    ll maumoi = x.mau * y.mau;
    cout << "Tich cua hai phan so = ";
    RUTGON (tumoi, maumoi);
}
void Thuong (PhanSo x, PhanSo y){
    ll tumoi = y.mau;
    ll maumoi = y.tu;
    ll new1 = x.tu*tumoi;
    ll new2 = x.mau*maumoi;
    cout << "Thuong cua hai phan so = ";
    RUTGON (new1, new2);
}

int main (){
    PhanSo x,y;
    cout << "Nhap phan so 1" << endl;
    nhap(x);
    cout << "Nhap phan so 2"<< endl;
    nhap(y);
    Tong_Hieu(x,y);
    Tich(x,y);
    Thuong(x,y);
    return 0;
}
