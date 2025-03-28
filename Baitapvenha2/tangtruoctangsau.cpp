#include <iostream>
using namespace std; 
int main () {
int x = 10;
int y = x++ ;
cout << x << " " << y;
}
// x++ là kêu máy tính tăng giá trị của x sau khi đã sử dụng cho việc gì đó rồi,
// ++x là tăng giá trị của x trước khi sử dụng cái gì đó 
// ví dụ x=10; y = ++x là kêu máy tính tăng giá trị của x TRƯỚC KHI gán vào biến y.