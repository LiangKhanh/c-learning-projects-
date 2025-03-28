#include<iostream>

using namespace std;

struct Student {
	string name;
    int age;
    int score;
};

int main() {
	int n;
	cin >> n;
	Student *students = new Student[100]; // là 1 mảng gồm 100 phần tử được cấp phát động, mỗi phần tử có 3 thuộc tính name, age, score.
	for ( int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].age >> students[i].score;
    }
    int max = students[0].score;
    for ( int i = 0 ; i < n; i++){
        if ( students[i].score > max ){
            max = students[i].score;
        }
    }
    for ( int i = 0 ; i < n; i++){
        if ( students[i].score == max ){
            cout << "Name: " << students[i].name << endl << "Age: " << students[i].age << endl << "Score: " << students[i].score << endl;
        }
    }
	delete[] students;
	return 0;
}