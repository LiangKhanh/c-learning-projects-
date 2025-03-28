#include <bits/stdc++.h>
#define ll long long
using namespace std;

// nhập họ tên, điểm toán, điểm văn của một học sinh. Tính điểm trung bình, xếp loại và xuất kết quả.

class Student{
private :
    string name;
    double toan;
    double van;
public : 
    void Info(){
        cout << "Nhap ho va ten: ";
        getline (cin, name); 
        cout << "Nhap diem toan: ";
        cin >> toan;
        cout << "Nhap diem van: ";
        cin >> van;
    }
    void Tinh_XL(){
        double tb = (toan + van) / 2;
        cout << "Diem trung binh: " << tb << endl;
        if ( tb >= 8.0 ) cout << "Xep loai: Gioi" << endl;
        else if ( tb >= 6.5 && tb < 8.0) cout << " Xep loai: Kha" << endl;
        else if ( tb >= 5.0 && tb < 6.5) cout << "Xep loai: Trung binh" << endl;
        else if ( tb >= 3.5 && tb < 5.0) cout << "Xep loai: Yeu" << endl;
        else cout << "Xep Loai: Kem";
    }
};

int main (){
    Student s; 
    s.Info();
    s.Tinh_XL();
    return 0; 
}