#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; ++i) {
        double j = sqrt(n * n - i * i);
        if (j > i && j <= n && j * j + i * i == n * n) {
            count += 1;
        }
    }
    cout << count; 
    return 0;
}