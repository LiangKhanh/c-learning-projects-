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
// toán tử "&" khi ở trong một hàm tức là có thay đổi gì trong hàm liên quan đến biến đang được xét thì giá trị mới sẽ được gán trực tiếp vào trong biến đang xét.

ll UCLN(ll a, ll b){
    while (b != 0){
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void RUTGON_XUAT(PhanSo &x){
    ll k = UCLN(x.tu, x.mau);
    x.tu /= k;
    x.mau /= k;
    cout<< "Ket qua sau khi rut gon: " << x.tu << "/" << x.mau << endl;
}


int main (){
    PhanSo x;
    nhap(x);
    RUTGON_XUAT(x);
    return 0;
}

