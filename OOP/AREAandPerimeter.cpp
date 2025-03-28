#include <iostream>

using namespace std;

class Rectangle {
public:
    double l;
    double wide;

    void getInformation(){
        cin >> l >> wide;
    }
    void display(){
        cout << "Area: " << l*wide << endl;
        cout << "Perimeter: "<< (l+wide)*2 << endl;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}