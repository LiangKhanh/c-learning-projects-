#include <iostream>

using namespace std;

int main() {
    int thang, nam;
    cin >> thang >> nam;

    // Mảng lưu số ngày của các tháng trong năm không nhuận
    int so_ngay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Điều chỉnh cho năm nhuận
    so_ngay[1] += (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0));

    // In kết quả
    cout << so_ngay[thang - 1] << endl;

    return 0;
}