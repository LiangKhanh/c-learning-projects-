#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;

    for (int k = 0; k < n / 2; k++) {
        if (a[k] != a[n - 1 - k]) {
            count++;
            if (count > 1) {
                break;
            }
        }
    }

    if (count <= 1) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}