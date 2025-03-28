#include<bits/stdc++.h>
#define ll long long 
using namespace std;

class Student{
private :
    string name;
    ll age;
public :
// constructor không tham số.
    Student (){

    }
// khi gọi hàm trong một lớp thì hàm này sẽ hoạt động khi có đối tượng thuộc lớp đó gọi hàm đó ra.
    void getInformation(){
        cout << "Nhap ten: ";
        getline (cin, name);
        cout << "Nhap tuoi:";
        cin >> age;
    }
    void display(){
        cout <<"Ten cua nguoi nhap: " << name << endl;
        cout <<"Tuoi cua nguoi nhap: " <<age;
    }  
};

int main(){
    Student s;
    s.getInformation();
    s.display();
    return 0;

}