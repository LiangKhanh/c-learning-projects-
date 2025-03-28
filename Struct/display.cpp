#include<iostream>

using namespace std;

struct Student {
	string name;
    int age;
    // hàm void này chỉ ở bên trong cấu trúc student phải là đối tượng của cấu trúc student thì mới xài được hàm. 
    void display(){
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
    }
};


int main() {
	int n;
    cin >> n;
	Student students[100];
	for ( int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].age;
    }
	for (int i = 0; i < n; i++) {
		students[i].display();
	}
	return 0;
}