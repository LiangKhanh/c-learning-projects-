#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Check for invalid input
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "-1" << endl;
        return 0;
    }

    int n = b + 1;
    int m = c + 2;
    int k = (3 + a - b) * 2;

    if (c > k) {
        cout << "-1" << endl;
    } else if (c % 2 == 0) {
        if (n < a && c > 2) {
            cout << n << " " << c - 2 << endl;
        } else {
            cout << "-1" << endl;
        }

        if (c > 2) {
            cout << b << " " << c - 2 << endl;
        } else {
            cout << "-1" << endl;
        }

        if (b > 1) {
            cout << b - 1 << " " << c + 2 << endl;
        } else {
            cout << "-1" << endl;
        }

        if (k >= m) {
            cout << b << " " << c + 2 << endl;
        } else {
            cout << "-1" << endl;
        }
    } else {
        cout << "-1" << endl;
    }

    return 0;
}