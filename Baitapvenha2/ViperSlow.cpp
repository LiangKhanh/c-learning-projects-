#include <iostream>
using namespace std;

double tinhtongthoigianlamcham(double arr[], int size) {
    double tong = 0;
    double thoigianketthuc = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= thoigianketthuc) {
            tong = tong + 2.0;
        } else {
            tong = tong + ((arr[i] + 2.0) - thoigianketthuc);
        }
        thoigianketthuc = arr[i] + 2.0;
    }
    return tong;
}

int main() {
    double arr[10000];
    int size = 0;
    while (true) {
        cin >> arr[size];
        if (arr[size] == -1) {
            break;
        }
        size++;
    }
    double k = tinhtongthoigianlamcham(arr, size);
    cout << k;
    return 0;
}