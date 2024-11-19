#include <iostream>
using namespace std;

int main() {
    unsigned int n, m;
    cin >> n >> m;
        if ((m % 4 == 0 && m % 100 != 0) || (m % 400 == 0)) {
            for (int i = 1; i <= 12; i++) {
                if ((i == 1 || i == 3 || i == 7 || i == 8 || i == 10 || i == 12) && i == n) {
                    cout << "31";
                }
                if ((i == 4 || i == 6 || i == 9 || i == 11) && i == n) {
                    cout << "30";
                }
                if (i == 2 && i == n) {
                    cout << "29";
                }
            }
        } else {
            for (int i = 1; i <= 12; i++) {
                if ((i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) && i == n) {
                    cout << "31";
                }
                if ((i == 4 || i == 6 || i == 9 || i == 11) && i == n) {
                    cout << "30";
                }
                if (i == 2 && i == n) {
                    cout << "28";
                }
            }
        }
    
    return 0;
}