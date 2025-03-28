#include<bits/stdc++.h> 
#define ll long long
using namespace std;


// nhap tu, mau, phuong thuc nhap, xuat dinh gia trị ( s và g ). tính ra + - * :

class cPhanSo{
private: 
    ll tu; 
    ll mau;
public:
    void nhap (){
        cout << "Nhap tu: ";
        cin >> tu;
        cout << "Nhap mau: ";
        cin >> mau;
    }
    ll UCLN(ll a, ll b){
        while (b != 0){
            ll temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    void rutgon (ll &a, ll &b){
        ll k = UCLN (a, b);
        a /= k;
        b /=k;
    }
    void xuat(ll a, ll b){
        if ( a != 0 && b == 1) cout << a << endl;
        else if ( a == 0 && b != 0)  cout << a << endl;
        else cout << a << "/" << b << endl;
    }
    // miễn là trong 1 lớp đó thì bao nhiêu đối tượng cũng được ( mỗi đối tượng đều có phương thức cụ thể đó )
    // không phải là cứ phải mỗi đối tượng thì mới có 1 phương thức và phương đó chỉ xài cho 1 đối tượng duy nhất đó
    void cong ( cPhanSo x, cPhanSo y){
        ll mauchung = x.mau * y.mau;
        x.tu *= y.mau;
        y.tu *= x.mau;
        x.mau = mauchung;
        y.mau = mauchung;
        ll tumoi = x.tu + y.tu;
        rutgon(tumoi, mauchung);
        xuat(tumoi, mauchung);
    }
    void tru ( cPhanSo x, cPhanSo y){
        ll mauchung = x.mau * y.mau;
        x.tu *= y.mau;
        y.tu *= x.mau;
        x.mau = mauchung;
        y.mau = mauchung;
        ll tumoi = x.tu - y.tu;
        rutgon(tumoi, mauchung);
        xuat(tumoi, mauchung);
    }
    void nhan (cPhanSo x, cPhanSo y){
        ll tumoi = x.tu*y.tu;
        ll maumoi = x.mau*y.mau;
        rutgon (tumoi,maumoi);
        xuat (tumoi, maumoi);
    }
    void chia (cPhanSo x, cPhanSo y){
        ll tumoi = x.tu*y.mau;
        ll maumoi = x.mau*y.tu;
        rutgon (tumoi,maumoi);
        xuat (tumoi, maumoi);
    }
    void settu(ll tu){
        this -> tu = tu;
    }
    ll gettu(){
        return tu;
    }
    void setmau(ll mau){
        this -> mau = mau;
    }
    ll getmau(){
        return mau;
    }

};

int main (){
    cPhanSo x, y;
    cout << "Nhap du lieu cho phan so 1:" << endl;
    x.nhap();
    cout << "Nhap du lieu cho phan so 2:" << endl;
    y.nhap();
    cout << "Phep cong hai phan so la : ";
    x.cong(x,y);
    cout << "Phep tru hai phan so la : ";
    x.tru(x,y);
    cout << "Phep nhan hai phan so la : ";
    x.nhan(x,y);
    cout << "Phep chia hai phan so la : ";
    x.chia(x,y);
    

}