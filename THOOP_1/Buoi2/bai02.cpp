#include<bits/stdc++.h> 
#define ll long long
using namespace std;

class Toado{
private: 
    double hd;
    double td;
public:

    Toado() {
        hd = 0;
        td = 0;
    }
    void nhap(){
        cout << "Nhap hoanh do: ";
        cin >> hd;
        cout << "Nhap tung do: ";
        cin >> td;
    }
    // một lớp nên luôn luôn có một setter và getter để lấy và bảo mật dữ liệu một cách an toàn.
    double get_td (){
        return td;
    }
    void set_td (double td){
        this -> td = td;
    }
    double get_hd (){
        return hd;
    }
    void set_hd (double hd){
        this -> hd = hd;
    }
    void xuat( double a, double b){
        cout << "(" << a << ";" << b <<")" <<endl;
    }
    void tinhtien (double hd, double td, double a, double b){
        set_hd(hd+a);
        set_td(td+b);
    }
};

int main (){
    Toado x;
    cout << "Nhap toa do: " << endl;
    x.nhap();
    cout << "Toa do vua nhap la: ";
    x.xuat (x.get_hd(), x.get_td());
    double a, b;
    cout << "Nhap don vi tinh tien hoanh do: ";
    cin >> a;
    cout <<"Nhap don vi tinh tien tung do: ";
    cin >> b;
    x.tinhtien(x.get_hd(), x.get_td(), a,b);
    cout << "Toa do sau khi tinh tien la: ";
    x.xuat (x.get_hd(), x.get_td());
    
    

}