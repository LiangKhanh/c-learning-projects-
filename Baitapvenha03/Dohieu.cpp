#include <iostream>
using namespace std;

// Hàm tính giá trị tuyệt đối
long long abs(long long x) {
    return (x < 0) ? -x : x;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long sum = a + b + c + d;

    bool withinRange = abs(a - b) <= 20000000 &&
                       abs(a - c) <= 20000000 &&
                       abs(a - d) <= 20000000 &&
                       abs(b - c) <= 20000000 &&
                       abs(b - d) <= 20000000 &&
                       abs(c - d) <= 20000000;

    if (a >= 5000000 && b >= 5000000 && c >= 5000000 && d >= 5000000 && sum >= 100000000 && withinRange) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }

    return 0;
}