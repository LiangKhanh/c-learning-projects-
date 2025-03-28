#include<iostream>
#include<string>

using namespace std;

struct Student {
    string name;
    int Age;
};

int main() {
	Student k1; // tức cấu trúc student này có 1 đối tượng và đối tượng này có 2 thuộc tính là name và age. 
    cin >> k1.name;
    cin >> k1.Age;
    cout << "Name: "<< k1.name << endl;
    cout <<"Age: " << k1.Age << endl;
	return 0;
}