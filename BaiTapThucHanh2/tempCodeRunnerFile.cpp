#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    string lonnhat = n;
    int sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    for (int i = 0; i < n.length(); ++i) {
        char bandau = n[i];
        for (char digit = '0'; digit <= '9'; ++digit) {
            if (digit == bandau) continue;
            int new_sum = sum - (bandau - '0') + (digit - '0');
            if (new_sum % 3 == 0) {
                n[i] = digit;
                if (n > lonnhat) {
                    lonnhat = n;
                }
            }
        }
        n[i] = bandau; 
    }

    cout << lonnhat << endl;
    return 0;
}