#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
	void display() {
		cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
	}
	void getInformation() {
		cin >> name >> age;
	}
};

int main() {
	int n;
    // đối tượng students có kiểu cấu trúc student gồm các thuộc tính của student. 
	Student students[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
        // truy cập vào từng đối tượng và nhập thông tin cho từng đối tượng.
        // mỗi lần truy cập vào 1 đối tượng thì sẽ thực tiện câu lệnh tương ứng cho thuộc tính của đối tượng đó. 
		students[i].getInformation();
	}
	for (int i = 0; i < n; i++) {
		students[i].display();
	}
	return 0;
}