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

void BienDoi(PhanSo &x, PhanSo &y){
    ll MCLN = x.mau * y.mau;
    ll tam1 = MCLN / x.mau;
    x.tu *= tam1;
    ll tam2 = MCLN / y.mau;
    y.tu *= tam2;
    x.mau = MCLN;
    y.mau = MCLN;
}
void SoSanh (PhanSo x, PhanSo y){
    if ( x.tu > y.tu){
        ll k = UCLN (x.tu, x.mau);
        x.tu /= k;
        x.mau /= k;
        cout << "Phan so lon hon la: " << x.tu << "/" << x.mau;
    }
    if (x.tu < y.tu){
        ll k = UCLN (y.tu, y.mau);
        y.tu /= k;
        y.mau /= k;
        cout << "Phan so lon hon la: " << y.tu << "/" << y.mau;
    }
    else if (x.tu == y.tu){
        cout << "Hai phan so bang nhau";
    }
}

int main (){
    PhanSo x,y;
    cout << "Nhap phan so 1" << endl;
    nhap(x);
    cout << "Nhap phan so 2"<< endl;
    nhap(y);
    BienDoi(x,y);
    SoSanh(x,y);
    return 0;
}

