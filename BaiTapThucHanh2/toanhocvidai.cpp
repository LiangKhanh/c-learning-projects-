#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int steps = 0;
    
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n << " ";
        steps++;
    }
    
    cout << endl << steps << endl;
    
    return 0;
}