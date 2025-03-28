#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private: 
    double length;
    double width;
public:
    Rectangle(){

    }
    Rectangle(double length, double width){
        this -> length = length;
        this -> width = width;
    }
    // thiết lập lại dữ liệu thuộc tính. 
    void setLength( double length ){
        this->length = length; 
    }
    double getLength() {
        return length;
    }
    // đi vào thuộc tính của đối tượng và sửa dữ liệu
    void setWidth (double width){
        this->width = width;
    }
    double getWidth(){
        return width;
    }
    double getArea(){
        return width*length;
    }
    double getPerimeter(){
        return ( width + length ) * 2;
    }  
};

int main() {
	Rectangle r(4, 5);
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	r.setLength(2);
	r.setWidth(3);
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	return 0;
}