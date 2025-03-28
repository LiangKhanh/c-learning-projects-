#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* 
    Định nghĩa lớp CHocSinh gồm các thuộc tính: mã, họ tên, giới tính, năm sinh, điểm trung bình và các phương thức cần thiết.

Viết chương trình cho phép người dùng nhập thông tin 2 học sinh.

-Cho biết học sinh nào có điểm trung bình cao hơn.
-Cho biết học sinh nào có tuổi nhỏ hơn
-Biến count static
- Thay đổi điểm trung bình
- Lấy: mã, họ tên, điểm trung bình */
class cHocSinh {
private: 
    ll id;
    string name;
    string gender;
    ll namsinh;
    ll gpa;
public:
    void nhap(){
        cout << "Nhap id: ";
        cin >> id;
        cin.ignore();
        cout << "Nhap ho va ten: ";
        getline(cin, name);
        cin.ignore();
        cout << "Nhap gioi tinh: ";
        cin >> gender;
        cout << "Nhap nam sinh: ";
        cin >> namsinh;
        cout << "Nhap diem trung binh: ";
        cin >> gpa;
    }
    void xuat (){
        cout << name << endl;
        cout << 
    }
    friend bool sosanh ( cHocSinh x, cHocSinh y){}
};

int main (){
    cHocSinh x;
    x.nhap
}