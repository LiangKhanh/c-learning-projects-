#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a != b) {
        if (a > b) {
            cout << "TRUE";
        } else {
            cout << ((b - a) % 2 == 0 ? "FALSE" : "TRUE");
        }
    } else {
        cout << "FALSE";
    }
}