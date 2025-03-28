#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Student{
private:
    string name;
    int id;
public:
    static int studentCount;
    // Constructor mới có đầu vào còn lại hàm trong class là không cần.
    Student(string name, int id){
        this -> name = name;
        this -> id = id;
    }
    void display (){
        cout << "Name: "<< name << endl;
        cout << "Id:  " << id << endl;
        studentCount++;
    }
};


int main (){

}