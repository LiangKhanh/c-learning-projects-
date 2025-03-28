#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 6.	Viết chương trình cho phép người dùng nhập vào danh sách học sinh (thông tin mỗi học sinh giống bài 5). Tìm và xuất thông tin học sinh có điểm trung bình cao nhất, thấp nhất ra màn hình

class Student{
private :
    string name;
    double toan;
    double van;
public : 
    void Info(){
        cin.ignore();
        cout << "Nhap ho va ten: ";
        getline (cin, name); 
        cout << "Nhap diem toan: ";
        cin >> toan;
        cout << "Nhap diem van: ";
        cin >> van;
    }
    double TB(){
        double tb = (toan + van) / 2;
        return tb; 
    }
    void display_name(){
        cout << name << endl;
    }
};
// nhập biến tĩnh
// kiểu dữ liệu <Tên class của biến tĩnh > "::" << tên biến >> 
int main (){
    cout << "So luong hoc sinh: ";
    ll soHS; 
    cin >> soHS;
    // cin.ignore();
    Student s[100]; 
    for ( ll i = 0; i <soHS; i++){
        cout << "Nhap du lieu cho hoc sinh " << i + 1 << endl;
        s[i].Info();
    }
    // tìm max
    double max = s[0].TB();
    ll remember = 0;
    for ( ll i = 0; i <soHS; i++){
         if ( s[i].TB() > max ){
            max = s[i].TB();
            remember = i;
         }
    }
    cout << "Hoc sinh co diem TB cao nhat: " ;
    s[remember].display_name();
    cout << "Diem TB: " << s[remember].TB() << endl;
    // tìm min 
    double min = 100;
    ll rem = 0;
    for ( ll i = 0; i <soHS; i++){
        if ( s[i].TB() < min ){
           max = s[i].TB();
           rem = i;
        }
   }
   cout << "Hoc sinh co diem TB thap nhat: " ;
   s[rem].display_name();
   cout << "Diem TB: " << s[rem].TB();
    return 0; 
}