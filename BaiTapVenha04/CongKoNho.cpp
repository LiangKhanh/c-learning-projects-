#include <iostream>
using namespace std;

// Function to add two numbers without carrying
int sum_without_remember(int param1, int param2, int factor = 1) {
    if (param1 <= 0 && param2 <= 0) return 0;
    int k = param1 % 10;
    int j = param2 % 10;
    int m = k + j;
    if (m >= 10) m = m - 10;
    return m * factor + sum_without_remember(param1 / 10, param2 / 10, factor * 10);
}

int main() {
    int param1, param2;
    cin >> param1 >> param2;
    cout << sum_without_remember(param1, param2) << endl;
    return 0;
}