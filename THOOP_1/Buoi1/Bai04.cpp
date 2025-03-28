#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Phanso{
private:
    ll tu;
    ll mau;
public:
    void nhap(){
        cout << "Nhap tu: ";
        cin >> tu;
        cout << "Nhap mau: ";
        cin >> mau;
    }
    friend bool sosanh(Phanso a, Phanso b);
    void xuat(){
        cout << tu << "/" << mau <<" ";
    }
};
bool sosanh(Phanso a, Phanso b){
    return a.tu*b.mau < b.tu*a.mau;
}
int main (){
    Phanso x[1000];
    cout << "Nhap so luong phan tu: ";
    ll ptu;
    cin >> ptu;
    for ( ll i = 0; i < ptu; i++){
        cout << "Nhap phan so " << i + 1 << endl;
        x[i].nhap();
    }
    sort(x,x+ptu,sosanh);
    cout << "Phan so lon nhat la: ";
    x[0].xuat();
    cout << endl;
    cout << "Mang duoc sap xep la: ";
    for ( ll i = 0; i<ptu; i++){
        x[i].xuat();
    }

}