#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Student{
public:
    string name;
    ll age;
    void info(){
        cin >> name >> age;
    }
    void show(){
        cout << "My name is: "<< name << endl;
        cout << "Age: " << age << endl;
    }
};

int main (){
    Student student;
    student.info();
    student.show();
}